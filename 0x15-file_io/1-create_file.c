#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * create_file - creates file.
 * @filename: the name of the file.
 * @text_content: is a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;
	size_t len;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	len = strlen(text_content);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	w = write(fd, text_content, len);
	if (w == -1)
	{
	close(fd);
	return (-1);
	}

	close(fd);
	return (1);
}
