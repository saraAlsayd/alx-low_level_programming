#include "main.h"

/**
 * clear_bit - sets the value to given bit.
 * @n: pointer of the number to change it .
 * @index: index of the bit clear.
 *
 * Return: -1 for failure ,1 for success.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

