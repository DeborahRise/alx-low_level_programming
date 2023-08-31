#include "main.h"

/**
 * help_wildcmp - function that compares two strings
 * @s1: string 1
 * @s2: string 2
 * @i: iteration
 * @j: iteration index
 * Return: 1 or 0
 */

int help_wildcmp(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (help_wildcmp(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (help_wildcmp(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (help_wildcmp(s1, s2, i + 1, j) || help_wildcmp(s1, s2, i, j + 1));
	return (0);
}
/**
 * wildcmp - function that compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
	return (help_wildcmp(s1, s2, 0, 0));

}
