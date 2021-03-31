#include "holberton.h"

/**
 * check_read - Checks for read error
 *
 * @src: Integer
 * @argv: Char pointer
 *
 * Return: Void
 */

void check_read(int src, char *argv)
{
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		exit(98);
	}
}

/**
 * check_write - Checks for write error
 *
 * @dest: Integer
 * @argv: Char pointer
 *
 * Return: Void
 */

void check_write(int dest, char *argv)
{
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv);
		exit(98);
	}
}

/**
 * main - Copies file
 *
 * @arc: count
 * @argv: arguments
 *
 * Return: 0;
 */

int main(int arc, char **argv)
{
	int src, dest, rc, wc, cls1, cls2;
	char buf[1024];
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (arc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	check_read(src, argv[1]);
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
	check_write(dest, argv[2]);
	while ((rc = read(src, buf, 1024)) > 0)
	{
		wc = write(dest, buf, rc);
		if (rc != wc)
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
	}
	if (rc == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	cls1 = close(src);
	cls2 = close(dest);
	if (cls1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", src);
		exit(100);
	}
	if (cls2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", dest);
		exit(100);
	}
	return (0);
}
