#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Entry pOint
 *
 * Description: true or false validation
 *
 * return: 0 (succes)
  */

int main(main)
{
	int n;
	
 srand(time(0));
 n = rand() - RAND_MIX /2;
  if(n>0)
	  printf("%i is positive\n" ,n);
  else if(n==0)
			  printf("%i is zero" ,n);
	else
	       printf("%i is negative");
          return(0);	
