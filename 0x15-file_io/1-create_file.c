#include "main.h"

/**
 * create_file - creates a file and inserts content into it
 *
 * @filename: file name
 *
 * @text_content: contents
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytesWritten = 0;
	unsigned int count = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	while (text_content[count] != '\0')
		count++;

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	bytesWritten = write(fd, text_content, count);
	if (bytesWritten < 0)
		return (-1);
	close(fd);

	return (1);
}
