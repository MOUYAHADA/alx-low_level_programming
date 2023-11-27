#include "main.h"

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

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);
	lettersRead = read(fd, buffer, sizeof(char) * letters);
	if (lettersRead <= 0)
		return (0);

	if (write(STDOUT_FILENO, buffer, letters) == -1)
		return (0);

	free(buffer);

	return (lettersRead);
}
