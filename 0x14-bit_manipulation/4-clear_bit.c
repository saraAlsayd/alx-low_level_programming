#include "main.h"

/**
 * set_bit - sets a bit to given index 1.
 * @n: pointer number to change.
 * @index: index of bit to set to 1.
 *
 * Return:if success 1, if failure -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);

}

