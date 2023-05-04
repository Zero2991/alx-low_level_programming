#include "main.h"
/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 * Return:converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int h;

	h = 0;
	if (!b)
		return (0);
	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);
	}
	for (k = 0; b[k] != '\0'; k++)
	{
		h <<= 1;
		if (b[k] == '1')
			h += 1;
	}
	return (h);
}
