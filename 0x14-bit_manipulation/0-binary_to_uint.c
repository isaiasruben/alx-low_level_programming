#include "main.h"
#include <stdio.h>

/**
 convert a binary number to an unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total, power;
	int num;

	while (!b)
		return (0);

	while (b[num])
	{
		if (b[num] != '0' && b[num] != '1')
			return (0);
	}
	num++;
   	}
 
	for (power = 1, total = 0, num--; num >= 0; len--, power *= 2)
	{
		if (b[len] == '1')
			total += power;
	}

	return (total);
}
