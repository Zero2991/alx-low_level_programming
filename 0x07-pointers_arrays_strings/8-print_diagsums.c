#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int k, m, sux1 = 0, sux2 = 0;

	for (k = 0; k <= (size * size); k = k + size + 1)
		sux1 = sux1 + a[k];

	for (m = size - 1; m <= (size * size) - size; m = m + size - 1)
	sux2 = sux2 + a[m];
	printf("%d, %d\n", sux1, sux2);
}
