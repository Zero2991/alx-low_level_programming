#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * main - Prints  sum of args + numbers
  * @argc: argument count
  * @argv: argument vector
  * Return: Always none
  */
int main(int argc, char *argv[])
{
	int j;
	unsigned int r, sum = 0;
	char *f;

	if (argc > 1)
	{
		for (j = 1; j < argc; j++)
		{
			f = argv[j];

			for (r = 0; r < strlen(f); r++)
			{
				if (f[r] < 48 || f[r] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(f);
			f++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
