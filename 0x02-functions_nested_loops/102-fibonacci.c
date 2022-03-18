#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
unsigned long num1, num2, temp;
num1 = 0;
num2 = 1;
for (i = 0; i < 50; ++i)
{
temp = num1 + num2;
if (i < 49)
{
printf("%lu,", temp);
}
else
{
printf("%lu", temp);
}
num1 = num2;
num2 = temp;
}
printf("\n");
return (0);
}
