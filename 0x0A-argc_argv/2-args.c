#include "main.h"
#include <stdio.h>
/**
  * main - Prints all  args
  * @argc: argument count
  * @argv: argument vector
  * Return: Always none
  */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}

	return (0);
}
