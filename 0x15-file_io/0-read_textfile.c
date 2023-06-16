#include "main.h"
#include <stdlib.h>

/**
 * read_textfile-Read text file print to STDOUT.
 * @filename:text file being read.
 * @letters: number of letters to can read it .
 * Return: f- actual number of bytes printed and read 
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fb;
	ssize_t fd;
	ssize_t f;
	ssize_t o;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	fb = malloc(sizeof(char) * letters);
	o = read(fd, fb, letters);
	f = write(STDOUT_FILENO, fb, o);

	free(fb);
	close(fd);
	return (f);
}

