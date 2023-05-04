#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int my;
	char *you;

	my = 1;
	you = (char *)&my;

	return (*you);
}
