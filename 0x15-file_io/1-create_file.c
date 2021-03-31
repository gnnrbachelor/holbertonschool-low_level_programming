#include "holberton.h"

/**
 * create_file - Creates file
 *
 * @filename: File Name
 * @text_content: String
 *
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int file, len, count = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
		;

		count = write(file, text_content, len);

		if (count == -1)
		return (-1);
	}

	close(file);

	return (1);
}
