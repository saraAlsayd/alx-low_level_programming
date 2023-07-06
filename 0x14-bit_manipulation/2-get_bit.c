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
unsigned long int valbit;

if (index > 63
Return(-1);

valbit = (n >> index) & 1;
Return(valbit);
}

