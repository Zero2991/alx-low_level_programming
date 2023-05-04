#include "main.h"
/**
 * _power - calculate (base and power)
 * @base: base of the exponet
 * @pow: power of the exponet
 * Return: value of base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int um;
	unsigned int d;

	um = 1;
	for (d = 1; d <= pow; d++)
		um *= base;
	return (um);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: num of prented
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int devo, rst;
	char fg;

	fg = 0;
	devo = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (devo != 0)
	{
		rst = n & devo;
		if (rst == devo)
		{
			fg = 1;
			_putchar('1');

		}
		else if (fg == 1 || devo == 1)
		{
			_putchar('0');
		}
		devo >>= 1;
	}
}
