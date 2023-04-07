#include "main.h"
#include <stdio.h>

/**
  * main - Prints  numb  args
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always none
  */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
