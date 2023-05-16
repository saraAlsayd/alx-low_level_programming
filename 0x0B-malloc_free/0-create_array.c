#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 *write function to creat array of char 
 *@size:the size of the memory to print 
 *@c:the address of memory to print
 *Return:0 (success)
 * 
*/
char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i;
ptr = malloc (sizeof(char));
if (size == 0 || ptr== NULL)
{
return(NULL);
}
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
return(ptr);
}

