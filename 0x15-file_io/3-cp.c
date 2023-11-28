#include "main.h"


/**
 * close_fd_all - closes all file descriptors
 *
 * @fd: file descriptior
 *
 * @fd2: file descriptor
 */

void close_fd_all(int fd, int fd2)
{
	if (close(fd) == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * close_fd - closes a file descriptor
 *
 * @fd: file descriptior
 */

void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * print_error - prints error and exits
 *
 * @errorNo: error number
 *
 * @filename: filename
 *
 * @exitCode: exit code
 */

void print_error(int errorNo, char *filename, int exitCode)
{
	if (errorNo == 1)
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", filename);
	if (errorNo == 2)
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", filename);
	exit(exitCode);
}

/**
 * main - copy file contents from one to an other
 *
 * @ac: argument count
 *
 * @av: argument vector
 *
 * Return: 0
 */

int main(int ac, char **av)
{
	int fd_from, fd_to;
	ssize_t bytesRead;
	char *buffer;

	if (ac != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		close_fd(fd_from);
		print_error(1, av[1], 98);
	}
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close_fd_all(fd_from, fd_to);
		print_error(1, av[2], 98);
	}
	buffer = malloc(sizeof(char) * 1024);
	do {
		bytesRead = read(fd_from, buffer, 1024);
		if (bytesRead == -1)
		{
			close_fd_all(fd_from, fd_to);
			free(buffer);
			print_error(1, av[1], 98);
		}
		if (write(fd_to, buffer, bytesRead) == -1)
		{
			close_fd_all(fd_from, fd_to);
			free(buffer);
			print_error(1, av[1], 98);
		}
	} while (bytesRead != 0);
	free(buffer);
	return (0);
}
