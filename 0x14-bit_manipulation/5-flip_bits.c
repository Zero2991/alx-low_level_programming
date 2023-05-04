#include "main.h"
/**
 * flip_bits - flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int defo, lm;
	unsigned int j, i;

	j = 0;
	lm = 1;
	defo = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (lm == (defo & lm))
			j++;
		lm <<= 1;
	}

	return (j);
}
