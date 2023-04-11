#include "main.h"
#include <stdlib.h>
/**
  * create_array - creates an array of chars
  * @size: The size of the array
  * @c: The char to fill in the array
  * Return: The array filled
  */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *p;

	if (size == 0)
		return (NULL);

	p = malloc(size * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
	{
		p[j] = c;
	}

	return (p);
}
