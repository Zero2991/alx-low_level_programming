#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry alpha without e and q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != e && l != q)
		putchar(l);
	}
		putchar('\n');

	return (0);
}
