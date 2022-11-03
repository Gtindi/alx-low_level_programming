#include "main.h"

/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename: The file name
 * @text_content: The text contnet
 *
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, status = -1;
	int len, i;

	if (filename == NULL)
		return (status);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (status);
	status = 1;

	if (text_content != NULL)
	{
		for (i = 0, len = 0; text_content[i] != '\0'; i++)
			len++;
		status = write(fd, text_content, len);
		if (status != -1)
			status = 1;
	}
	close(fd);
	return (status);
}
