#include "main.h"
#include <stdio.h>

/**
 * main - prints the sum of all even fibonacci numbers below 4 million
 * Return: 0.
 */
int main(void)
{
unsigned long num1, num2, tmp, sum;
num1 = 0;
num2 = 1;
sum = 0;
while (num2 < 4000000)
{
tmp = (long) num1 + num2;
if (tmp % 2 == 0)
sum += tmp;
num1 = num2;
num2 = tmp;
}
printf("%lu\n", sum);
return (0);
}
