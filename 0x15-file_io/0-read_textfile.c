#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the POSIX
 * standard output.
 * @filename: The file name
 * @letters: Total number of letters to be read
 *
 * Return: number of letters read & printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readCount;
	char buf[1];
	ssize_t printCount = 0;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	readCount = read(fd, buf, 1);
	while (readCount > 0 && printCount < (ssize_t)letters)
	{
		printCount += write(STDOUT_FILENO, buf, 1);
		readCount = read(fd, buf, 1);
	}

	close(fd);
	return (printCount);
}
