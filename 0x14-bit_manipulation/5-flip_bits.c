#include "main.h"

/**
 * flip_bits - count the number of bits to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change another num.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclusive = n ^ m;
	unsigned long int current;
	int k, count = 0;

	for (k = 63; k >= 0; k--)
	{
		current = exclusive >> k;
		if (current & 1)
			count++;
	}

	return (count);
}

