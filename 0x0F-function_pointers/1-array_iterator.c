#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - prints an integer
 * @array: is pointer to int
 * @action: is a pointer to the function
 * @size: is the size of the array
 * Return: None.
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t j;
if (array == NULL || action == NULL)
{
return;
}
for (j = 0; j < size; j++)
{
action(array[j]);
}
}
