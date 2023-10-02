#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates file.
 * @filename: the name of the file.
 * @text_content:  is a NULL terminated string to write to the file.
 * Returns: 1 on success.
 * OR: -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int w, len = 0;
	if (filename == NULL)
	       return (-1);
	if (!text_content)
	{
		for (len =0; text_content[len]; ++len)
		;
	}	
	int fd = open("foo.txt", O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	w = write(fd, text_content, len);
	if ( w == -1)
		return (-1);
	close(fd);
	return (1);
}
	
