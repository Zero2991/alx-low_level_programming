#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - function with two arguments
 * @separator: char type pointer
 * @n: unsigned int type const
 * Description: prints numbers, followed by a new line
 * Return: none
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list ls;

	va_start(ls, n);
	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(ls, int));
		if (j < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ls);
}
