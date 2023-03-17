#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char copa;

	for (copa = 'z'; copa >= 'a'; copa--)
	{
		putchar(copa);
	}
		putchar('\n');

	return (0);
}
