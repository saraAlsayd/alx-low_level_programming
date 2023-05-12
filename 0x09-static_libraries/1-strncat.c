#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int k;
	int i;

	i = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	i = 0;
	while (i < n && src[i] != '\0')
	{
	dest[k] = src[i];
	k++;
	i++;
	}
	dest[i] = '\0';
	return (dest);
}

