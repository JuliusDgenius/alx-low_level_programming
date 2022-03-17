##include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from n to 98.
 * @n: the number to start counting from n to 98
 * Return: Always 0.
 */
void print_to_98(int n)
{
if (n < 98)
{
for (n = n; n < 98; n++)
printf("%d, ", n);
printf("%d\n", 98);
}
else
{
for (n = n; n > 98; n--)
printf("%d, ", n);
printf("%d\n", 98);
}
}include "main.h"
#include <stdio.h>

/**
 * add -prints add two numbers
 *@i: print int i
 *@k: print int k
 * Return: Always 0.
 */

int add(int i, int k)
{
return (i + k);
}
