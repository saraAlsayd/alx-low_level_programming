#include "main.h"

/**
 * print_binary -it's prints the binary representation
 * of a the number.
 * @n: unsigned long int.
 *
 * Return: no thing to return.
 */
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}

