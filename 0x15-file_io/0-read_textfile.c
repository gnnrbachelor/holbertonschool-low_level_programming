#include "holberton.h"

/**
 *  read_textfile - Reads text file
 *
 * @filename: File name.
 * @letters: # of letters
 *
 * Return: 0 or # of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t lr, lw;
	char *buf;

	if (!filename)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (!buf)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	lr = read(file, buf, letters);
	if (lr == -1)
		return (0);

	lw = write(STDOUT_FILENO, buf, lr);

	close(file);
	free(buf);
	if (lw != lr)
		return (0);

	return (lw);

}

