#include "main.h"
#include <stdio.h>

int chek_prime(int m, int j);

/**
  * is_prime_number - Returns if a number is prime
  * @n: the number to be checked
  *
  * Return: integer value
  */
int is_prime_number(int n)
{
	return (chek_prime(n, 1));
}

/**
  * check_prime - Check if number is prime
  * @n: the number to be checked
  * @i: the iteration times
  *
  * Return: 1 for prime or 0 composite
  */
int chek_prime(int m, int j)
{
	if (m <= 1)
		return (0);

	if (m % j == 0 && j > 1)
		return (0);

	if ((m / j) < j)
		return (1);

	return (chek_prime(m, j + 1));
}
