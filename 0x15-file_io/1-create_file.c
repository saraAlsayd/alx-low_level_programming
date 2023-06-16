#include "main.h"

/**
 * create_file to Creates file.
 * @filename: A pointer to name file to create it.
 * @text_content: A pointer of string to write in the file.
 *
 * Return: If the function fails -1.
 * Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0700);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}

