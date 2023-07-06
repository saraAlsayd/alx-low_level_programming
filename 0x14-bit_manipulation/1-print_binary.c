#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: the number to print in binary.
 *
 *Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	int j, count = 0;
	unsigned long int result;

	for (j = 63; j >= 0; j--)
	{
		current = n >> j;

		if (result & 1)
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

