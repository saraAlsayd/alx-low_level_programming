#include "main.h"

/**
 *get_bit - prints the value of a bit at a given index.
 *@n: the number to print in binary.
 *@index: is the index of the starting.
 *
 *Return: the value of the bit, or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int j;

	if (n == 0 && index < 64)
		return (0);

	for (j = 0; j <= 63; n >>= 1, j++)
	{
		if (index == j)
		{
			return (n & 1);
		}
	}

	return (-1);
}

