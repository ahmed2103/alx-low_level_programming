#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * close_file - close file stream.
 * @fd: file descriptor to the file.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - coppies file content from one to another.
 * @argc: the number of arguments passed to main.
 * @argv: array to the arguments
 *
 * Return: 0 on success.
 *
 * Description:if the arguments count is incorrect exit (97)
 *             if file to read not exist or cant be read - exit code (98).
 *             if file cant be created or wrriten in exit (99).
 *             if read or write file cant close exit (100).
 */
int main(int argc, char *argv[])
{
	fd1, fd2, r, w;
	char *buffer, *file;
	
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file = argv[2];
	if (!buffer)
		dprintf(STDERR_FILEINO, "Error: Can't write to %s\n", file);
	exit(99);
	fd1 = = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(fd1, buffer, 1024)) > 0)
	{
		if (r == -1)
		{	
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
	}

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}	
