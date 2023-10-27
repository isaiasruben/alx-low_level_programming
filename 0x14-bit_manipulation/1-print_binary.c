#include "main.h"
#include <stdio.h>

/**
 *  print binary representation of a number
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int shifts;

	if (n == 0)
	{
		printf("0");
		return;
	}
	
	int temp=n;
	shifts =0;
	while((temp >>= 1) > 0) {
	 shifts++;
	}
	
	while((shifts >= 0) {
   	 if ((n >> shifts) & 1) {
        	printf("1");
  	  } 	else {
        	printf("0");
   	  }
    	shifts--;
}
