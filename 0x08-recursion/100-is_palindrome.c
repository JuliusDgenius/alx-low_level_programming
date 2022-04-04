#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s +1));
}

/**
 * compare - compares each character of a string
 * @s: the string to be compared
 * @n1: smallest iterator
 * @n2: bigger iterator
 * Return: .
 */
int compare(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + compare(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: a string
 * *Return: 1 if s is a palindrome and 0 if not a palindrome
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare(s, 0, _strlen_recursion(s) - 1));
}
