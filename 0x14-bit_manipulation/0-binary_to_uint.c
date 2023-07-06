#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing of the binary number.
 *
 * Return: the converted of the number.
 */


unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int decval = 0;

		if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		decval = 2 * decval + (b[i] - '0');
	}

	return (decval);
}

