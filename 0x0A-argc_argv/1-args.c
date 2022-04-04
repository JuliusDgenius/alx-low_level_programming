#include <stdio.h>

/**
 * main - prints argc value
 * @argc: No of arguments.
 * @argv: array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%\n", argc - 1);
	return (0);
}
