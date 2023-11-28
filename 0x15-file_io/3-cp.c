#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * close_fd - closes a file descriptor
 *
 * @fd: file descriptior
 */

void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
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
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	if (errorNo == 2)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
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
	int fd_from, fd_to, bytesRead;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		print_error(1, av[1], 98);


	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error(2, av[2], 99);
	}

	while (((bytesRead = read(fd_from, buffer, 1024))) > 0)
	{
		if (write(fd_to, buffer, bytesRead) == -1)
			print_error(2, av[2], 99);
	}

	if (bytesRead == -1)
		print_error(1, av[1], 98);


	close_fd(fd_from);
	close_fd(fd_to);

	return (0);
}
