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
	char alp, e, q;

	e = 'e';
	q = 'q';

	for (alp = 'a'; alp <= 'z'; alp++)
	{
	if (alp != e && alp != q)
		putchar(alp);
	}
		putchar('\n');

	return (0);
}
