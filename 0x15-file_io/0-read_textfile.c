#include "main.h"

/**
 * close_and_free - close file and free buffer
 *
 * @ptr: pointer to allocated memory
 *
 * @fd: filedescriptor
 */

void close_and_free(char *ptr, int fd)
{
		free(ptr);
		close(fd);
}


/**
 * read_textfile - reads a text file and prints it to the stdout
 *
 * @filename: text file name
 *
 * @letters: number of letters to print
 *
 * Return: number of letters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t lettersRead = 0;
	ssize_t bytesWritten = 0;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close_and_free(buffer, fd);
		return (0);
	}

	lettersRead = read(fd, buffer, letters);

	if (lettersRead  <= 0)
	{
		close_and_free(buffer, fd);
		return (0);
	}

	bytesWritten = write(STDOUT_FILENO, buffer, lettersRead);
	if (bytesWritten <= 0)
		return (0);

	close_and_free(buffer, fd);

	return (bytesWritten);
}
