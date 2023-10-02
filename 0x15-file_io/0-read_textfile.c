#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file path to be read.
 * @letters: number of letters it should read and print.
 *
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
  int fd;
  ssize_t sz;
  char *buffer;

  if (!filename)
    return (0);

  fd = open(filename, O_RDONLY);
  if (fd < 0)
    return (0);

  buffer = malloc((sizeof(char) * letters) + 1);
  if (!buffer)
  {
    close(fd);
    return (0);
  }

  sz = read(fd, buffer, letters);
  if (sz < 0)
  {
    free(buffer);
    close(fd);
    return (0);
  }

  buffer[sz] = '\0';

  sz = write(STDOUT_FILENO, buffer, sz);
  free(buffer);
  close(fd);

  if (sz <= 0)
    return (0);

  return (sz);
}
