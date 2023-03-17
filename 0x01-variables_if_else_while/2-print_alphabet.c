#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{	
		putchar(alpha[i]);
	}
	putchar('\n');

	return (0);
}
