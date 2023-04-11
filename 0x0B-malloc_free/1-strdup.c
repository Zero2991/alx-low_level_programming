#include "main.h"
#include <stdlib.h>

/**
  * _strdup - Duplicate a string
  * @str: the string to duplicate
  *
  * Return: the string duplicated
  */
char *_strdup(char *str)
{
	int h = 0, j = 1;
	char *f;

	if (str == NULL)
		return (NULL);

	while (str[j])
	{
		j++;
	}

	f = malloc((sizeof(char) * j) + 1);

	if (f == NULL)
		return (NULL);

	while (h < j)
	{
		f[h] = str[h];
		h++;
	}

	f[h] = '\0';
	return (f);
}
