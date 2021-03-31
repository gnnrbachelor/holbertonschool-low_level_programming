#include "holberton.h"

/**
 * append_text_to_file - Appends text to end
 *
 * @filename: File name
 * @text_content: Text Content
 *
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, len, count;

	if (!filename)
		return (-1);

	if (!text_content)
		return (1);

	for (len = 0; text_content[len]; len++)
		;

	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);

	count = write(file, text_content, len);
	if (count == -1)
		return (-1);

	close(file);
	return (1);
}
