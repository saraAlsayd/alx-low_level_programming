#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - a function that creates an arraybof char.
 * @size: the size of the memory to print
 * @c: a specific char 
 * Return: pointer to array, NULL if fail 
 *
 */

char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i;

ptr = malloc(sizeof(char) * size);
if (size == 0 || ptr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
return (ptr);
}

