#include "main.h"
#include <stdlib.h>

/**
  * read_textfile - a function that reads text file and
  * prints it to the POSIX STDOUT.
  * @filename: the text file that is being read
  * @letters: the number of letters
  * Return: if filename is NULL return 0
  * if write fails or does not write the expected
  * amount of bytes, return 0
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
