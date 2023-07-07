#include "main.h"

/**
 * print_binary - prints the binary representation
 * of a number.
 * @n:the unsigned long int.
 *
 * Return: no thing.
 */
void print_binary(unsigned long int n)
{
int i;
for (i = 31; i >= 0; i--)
(n >> i) & 1;
if (n == '0')
putchar('0');
else if (n == '1')
putchar ('1');
else
putchar('0');
}

