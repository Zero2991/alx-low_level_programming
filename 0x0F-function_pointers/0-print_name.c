#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints a prenom.
 * @name: input prenom.
 * @f: function pointer.
 * Return: none.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
