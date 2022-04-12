#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory
 * @nmemb: input string
 * @size: input string
 * Return: Pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int i, d;

d = nmemb * size;
if (nmemb <= 0 || size <= 0)
	return (NULL);

p = malloc(d);
if (p == NULL)
	return (NULL);

for (1 = 0; i < (d); i++)
{
	p[i] = 0;
}
return (p);
}
