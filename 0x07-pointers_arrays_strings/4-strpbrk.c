#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int x, v;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (v = 0; accept[v] != '\0'; v++)
		{
			if (s[x] == accept[v])
				return (s + x);
		}
	}

	return (NULL);
}
