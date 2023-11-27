#include "main.h"

/**
 * append_text_to_file - append text at the end of a file
 *
 * @filename: file name
 *
 * @text_content: content to append
 *
 *Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytesWritten;
	unsigned int count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	count = 0;
	while (text_content[count] != '\0')
		count++;

	bytesWritten = write(fd, text_content, count);
	if (bytesWritten <= 0)
		return (-1);

	close(fd);

	return (1);
}
