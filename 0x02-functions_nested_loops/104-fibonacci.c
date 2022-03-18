#include "main.h"
#include <stdio.h>

/**
 * main - prints out 98 fibonacci numbers starting with 1, 2
 *
 * Description: Use of long long is not allowed, so had to cut both numbers in
 * two after a certain point and account for when bottom part of num would
 * overflow to the top part.
 * Return: Describes the return value.
 */
/int main(void)
{
unsigned long int i, j, k, j1, j2, k1, k2;
j = 1;
k = 2;
printf("%lu", j);
for (i = 1; i < 91; i++)
{
printf(", %lu", k);
k = k + j;
j = k - j;
}
j1 = j / 1000000000;
j2 = j % 1000000000;
k1 = k / 1000000000;
k2 = k % 1000000000;
for (i = 92; i < 99; ++i)
{printf(", %lu", k1 + (k2 / 1000000000));
printf("%lu", k2 % 1000000000);
k1 = k1 + j1;
j1 = k1 - j1;
k2 = k2 + j2;
j2 = k2 - j2;
}printf("\n");
return (0);
}
