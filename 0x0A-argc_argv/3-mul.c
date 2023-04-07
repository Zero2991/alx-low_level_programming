#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - Prints  multiplication of 2 args numbers
  * @argc: argument count
  * @argv: argument vector
  * Return: Always none
  */
int main(int argc, char *argv[])
{
	int ck = 0, fg = 0;

	if (argc == 3)
	{
		ck = atoi(argv[1]);
		fg = atoi(argv[2]);
		printf("%d\n", ck * fg);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
