#include "main.h"

/**
 * print_binary - prints the binary of a decimal numbers.
 * @n: number to print in binary.
 *
 * Return: no thing.
 */

void print_binary(unsigned long int n)
{
	int count = 0, k;
	unsigned long int current;

	for (k = 63; k >= 0; k--)
	{
		current = n >> k;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

