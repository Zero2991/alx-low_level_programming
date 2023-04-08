#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, v, val, chek;

	val = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		chek = 0;

		for (v = 0; accept[v] != '\0'; v++)
		{
			if (accept[v] == s[i])
			{
				val++;
				chek = 1;
			}
		}

		if (chek == 0)
			return (val);
	}

	return (val);
}
