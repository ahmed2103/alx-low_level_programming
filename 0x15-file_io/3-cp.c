#include <fcntl.h>
#include <unistd.h>
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
 * main - copies file content from one to another.
 * @argc: the number of arguments passed to main.
 * @argv: array to the arguments
 *
 * Return: 0 on success.
 *
 * Description: if the arguments count is incorrect exit (97)
 *              if file to read not exist or cant be read - exit code (98).
 *              if file cant be created or written in exit (99).
 *              if read or write file cant close exit (100).
 */
int main(int argc, char *argv[])
{
  int fd1, fd2, r, w;
  char *buffer, *file;

  if (argc != 3)
  {
    dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
    exit(97);
  }

  fd1 = open(argv[1], O_RDONLY);
  if (fd1 == -1)
  {
    dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
    exit(98);
  }

  file = argv[2];

  buffer = malloc(1024);
  if (!buffer)
  {
    dprintf(STDERR_FILENO, "Error: Can't allocate memory\n");
    close_file(fd1);
    exit(99);
  }

  fd2 = open(file, O_CREAT | O_WRONLY | O_TRUNC, 0664);
  if (fd2 == -1)
  {
    dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
    free(buffer);
    close_file(fd1);
    exit(99);
  }

  while ((r = read(fd1, buffer, 1024)) > 0)
  {
    w = write(fd2, buffer, r);
    if (w == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
      free(buffer);
      close_file(fd1);
      close_file(fd2);
      exit(99);
    }
  }

  free(buffer);
  close_file(fd1);
  close_file(fd2);

  return (0);
}
