#include "main.h"

/**
 * _isalpha - checks for alphabetic charatcter.
 * @c: character being checked
 * Return: 1 if c is a better, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
