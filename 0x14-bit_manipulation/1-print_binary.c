#include "main.h"

/**
 * print_binary - print binary equivalent of the decimal number.
 * @n: number to print it.
 */
void print_binary(unsigned long int n)
{
	int j, count = 0;
	unsigned long int index;

	for (j = 63; j >= 0; j--)
	{
		index = n >> j;

		if (index & 1)
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

