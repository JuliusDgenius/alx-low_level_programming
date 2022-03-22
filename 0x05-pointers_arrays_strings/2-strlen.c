#include "main.h"

/**
 * _strlen - calculates the length of string
 * @s: string location pointer
 * Return: string length
 */
_strlen(char *s)
{
char c = 0;
while (*(s + c) != '\0')
c++;
return (c);
}
