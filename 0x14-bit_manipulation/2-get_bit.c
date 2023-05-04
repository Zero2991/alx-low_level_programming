#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: checking bits
 * @index: which to check bit
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int vito, resipa;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	vito = 1 << index;
	resipa = n & vito;
	if (resipa == vito)
		return (1);

	return (0);
}
