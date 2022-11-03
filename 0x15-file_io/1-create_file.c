#include "main.h"

/**
 * create_file - creates a file.
 * @filename: The file name
 * @text_content: The text to be written to the new file
 *
 * Return: (int)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, status = -1;
	int len, i;

	if (filename == NULL)
		return (status);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd < 0)
		return (status);

	status = 1;
	if (text_content != NULL)
	{
		for (i = 0, len = 0; text_content[i] != '\0'; i++)
			len++;
		status = write(fd, text_content, len);
		if (status >= 0)
			status = 1;
	}

	close(fd);
	return (status);
}
