#include "main.h"

/**
 * _strlen - calculates the length of string
 * @s: string location pointer
 * Return: string length
 */
int _strlen(char *s)
{
int c = 0;
while (*(s + c) != '\0')
c++;
return (c);
}
