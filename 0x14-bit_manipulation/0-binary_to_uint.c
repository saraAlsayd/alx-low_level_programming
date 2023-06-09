#include "main.h"

/**
 * binary_to_uint - converts the binary number to int.
 * @b: string of the binary number.
 *
 * Return: converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num_count= 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		num_count = 2 * num_count + (b[i] - '0');
	}

	return (num_count);
}

