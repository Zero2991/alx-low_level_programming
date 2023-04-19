#include <stdlib.h>
#include <stdio.h>
/**
 * print_opcodes - print the opcodes of this program
 * @a: address of the main function
 * @n: number of bytes to print
 * Return: void
**/
void print_opcodes(char *a, int n)
{
int t;

for (t = 0; t < n; t++)
{
printf("%.2hhx", a[t]);
if (t < n - 1)
printf(" ");
}
printf("\n");

}
/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to arguments*
 * Return: always none
 */
int main(int argc, char **argv)
{
int m;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
m = atoi(argv[1]);
if (m < 0)
{
printf("Error\n");
exit(2);
}
print_opcodes((char *)&main, m);
return (0);
}
