#inclide "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: an input string
 * @s2: second input string
 * @n: len s2 string for print
 * Return: nothing
 */
char *sring_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned in ll, i, e;
	char *a;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
		ll = 0;
		while (s1[ll])
			ll++;

		a = malloc(sizeof(*a) * ll + n + 1);

		if (a == NULL)
			return (NULL);

		for (i = 0, e = 0; i < (ll + n); i++)
		{
			if (i < ll)
			{
				a[i] = s1[i];
			}
			else
			{
				a[i] = s2[e++];
			}
		}
		a[i] = '\0';
		return (a);
}
