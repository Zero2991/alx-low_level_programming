#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function with 2 parameter
 * @format: char type pointer to string
 * Description: prints anything followed by a new line
 * Return: na
 */
void print_all(const char * const format, ...)
{
	int v;
	char *str;
	char *space;
	va_list ls;

	va_start(ls, format);
	v = 0;
	while (format && format[v])
	{
		space = "";
		if (format[v + 1])
			space = ", ";
		switch (format[v])
		{

		case 'c':
			printf("%c%s", va_arg(ls, int), space);
			break;
		case 'i':
			printf("%d%s", va_arg(ls, int), space);
			break;
		case 'f':
			printf("%f%s", va_arg(ls, double), space);
			break;
		case 's':
			str = va_arg(ls, char *);
			if (!str || !*str)
				str = "(nil)";
			printf("%s%s", str, space);
			break;
		}
		v++;
	}
	printf("\n");
}
