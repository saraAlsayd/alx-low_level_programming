#include "main.h"

/**
 * append_text_to_file - Appends text at end of file.
 * @filename: A pointer the name of file.
 * @text_content: The string to add end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If file does not exist write permissions - -1.
 *         and if Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int g, j, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	g = open(filename, O_WRONLY | O_APPEND);
	j = write(g, text_content, len);

	if (g == -1 || j == -1)
		return (-1);

	close(g);

	return (1);
}

