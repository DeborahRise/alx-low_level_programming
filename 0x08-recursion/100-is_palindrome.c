#include "main.h"
#include <string.h>

/**
 * help_is_palindrome - a function that checks a palindrome
 * @s: string passed
 * @i: index 0 of string
 * @len: length of string
 * Return: returns 1 or 0
 */

int help_is_palindrome(char *s, int i, int len)
{
	if (i == len)
	return (1);
	if (i < len)
	{
		if (*(s + i) == *(s + len))
		{
			return (help_is_palindrome(s, i + 1, len - 1));
		}
		return (0);
	}
	return (1);
}
/**
 * is_palindrome - a function that checks a palindrome.
 * @s: string passed
 * Return: returns 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (help_is_palindrome(s, 0, strlen(s) - 1));
}
