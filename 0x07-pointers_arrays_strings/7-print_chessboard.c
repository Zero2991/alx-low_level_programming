#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int j, g;

	for (j = 0; j < 8; j++)
	{
		for (g = 0; g < 8; g++)
			_putchar(a[j][g]);
		_putchar('\n');
	}
}
