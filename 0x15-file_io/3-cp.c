#include "main.h"

/**
 * main - Entry Point
 * @argc: Argument count
 * @argv: Argument list
 *
 * Return: (int)
 */
int main(int argc, char **argv)
{
	int fdFrom, fdTo, status;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fdFrom = open(argv[1], O_RDONLY);
	fdTo = open(argv[2], O_CREAT | O_WRONLY, 0664);

	if (fdFrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (fdTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	copyTo(fdFrom, fdTo, argv[1], argv[2]);
	status = close(fdFrom);
	if (status == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdFrom);
	status = close(fdTo);
	if (status == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdTo);
	if (status == -1)
		exit(100);
	return (0);
}

/**
 * copyTo - copies from file to another file
 * @from: From file descriptor
 * @to: To file descriptor
 * @fromFilename: The from file name
 * @toFilename: The to file name
 *
 * Return: (void)
 */
void copyTo(int from, int to, char *fromFilename, char *toFilename)
{
	char buf[1024];
	int status, readCount;

	readCount = read(from, buf, 1024);
	while (readCount != 0)
	{
		if (readCount < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fromFilename);
			exit(98);
		}
		status = write(to, buf, readCount);
		if (status == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", toFilename);
			exit(99);
		}
		readCount = read(from, buf, 1024);
	}
}
