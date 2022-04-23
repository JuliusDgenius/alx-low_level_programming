#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints out 98 fibonacci numbers starting with 1, 2
 *
 * Description: Use of long long is not allowed, so had to cut both numbers in
 * two after a certain point and account for when bottom part of num would
 * overflow to the top part.
 * Return: Describes the return value.
 */
int main(void)
{
int i, flag;
unsigned long num1, num2, t, rem, fp_num2, sp_num2, fp_num1, sp_num1, t1, t2;
num1 = 0;
num2 = 1;
flag = 0;
for (i = 0; i < 91; i++)
{
if (num2 < 1000000000000000000)
{
t = num1 + num2;
printf("%lu, ", t);
num1 = num2;
num2 = t;
}
else
{
if (flag++ == 0)
{
fp_num2 = num2 / 1000000000;
sp_num2 = num2 % 1000000000;
fp_num1 = num1 / 1000000000;
fp_num1 = num1 % 1000000000;
}
t1 = fp_num1 + fp_num2;
t2 = sp_num1 + sp_num2;
rem = t2 / 10000000000;
t1 += rem;
t2 %= 10000000000;
if (i < 99)
printf("%lu%010lu, ", t1, t2);
fp_num1 = fp_num2;
sp_num1 = sp_num2;
fp_num2 = t1;
sp_num2 = t2;
}
}
printf("%lu%lu\n", t1, t2);
return (0);
}
