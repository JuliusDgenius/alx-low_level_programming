#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - reads a textfile and prints to standard output
 * @filename: filename from which to read from
 * @letters: the number of letters to read and print
 *
 * Return: returns the number of letters to read and print. 0 if file fails to open or read file and 0 if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	fd = open(filename, O_RDONLY);
	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (fd == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);

	return (w);
}
