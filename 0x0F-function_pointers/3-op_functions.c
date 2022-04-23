#include "3-calc.h"

/**
 * op_add - addition function
 * @x: first int input
 * @y: second int input
 * Return: sum of x and y
 */
int op_add(int x, int y)
{
return (x + y);
}

/**
 * op_sub - subtraction function
 * @a: first int
 * @b: second int
 * Return: the difference of two integers
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - calculates the products of two numbers
 * @x: first number
 * @y: second number
 * Return: product of two numbers
 */
int op_mul(int x, int y)
{
return (x * y);
}

/**
 * op_div - divides two numbers
 * @x: first num
 * @y: second num
 * Return: returns division of two nums
 */
int op_div(int x, int y)
{
return (x / y);
}

/**
 * op_mod - get remainder of the division of 2 nums
 * @x: first num
 * @y: second num
 * Return: remainder
 */
int op_mod(int x, int y)
{
return (x % y);
}
