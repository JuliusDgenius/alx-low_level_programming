#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the products of two numbers
 * @argc: no of arguments
 * @argv: array of arguments
 * Return: 0 on success or 1 on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
