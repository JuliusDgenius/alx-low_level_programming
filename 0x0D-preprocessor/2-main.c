#include <stdio.h>

/**
 * main - print the name of the file it was compiled from
 * @void: accepts nothing
 * Return 0 on success
 */
int main(void)
{
	printf("%s\n", _FILE_);
	return (0);
}
