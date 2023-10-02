c
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: is the name of the file.
 * @text_content: the NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
  int fd;
  ssize_t w;
  size_t len;

  if (!filename)
    return (-1);

  fd = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0600);
  if (fd == -1)
    return (-1);

  if (!text_content)
  {
    close(fd);
    return (1);
  }

  len = strlen(text_content);

  w = write(fd, text_content, len);
  if (w == -1)
  {
    close(fd);
    return (-1);
  }

  close(fd);
  return (1);
}
