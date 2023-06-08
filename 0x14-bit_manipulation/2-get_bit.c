#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in decimal number.
 * @n:to search number.
 * @index: index of bit.
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int num_bit;

	if (index > 63)
		return (-1);

	num_bit = (n >> index) & 1;

	return (num_bit);
}

