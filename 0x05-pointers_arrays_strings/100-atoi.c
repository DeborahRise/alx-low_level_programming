#include "main.h"
#include <string.h>
#include <limits.h>

/**
 * _atoi - converts string to integer
 * @s: string parameter passed
 * Return: 0
 */

int _atoi(char *s)
{
	/* Initialize sign as positive*/
	int sign = 1;
	int result = 0;
	int i = 0;
	/* Calculate the length of the string */
	int length = strlen(s);

	while (i < length && s[i] == ' ')
	i++;

	if (i < length && s[i] == '-')
	{
	sign = -1;
	i++;
	}
	else if (i < length && s[i] == '+')
	{
	i++;
	}

	while (i < length && s[i] >= '0' && s[i] <= '9')
	{
	/* Convert the character to a digit */
	int digit = s[i] - '0';

	/* Check for overflow */
	if (result > (INT_MAX - digit) / 10)
	{
		if (sign == 1)
		return (INT_MAX);
		else
		return (INT_MIN);
	}

	result = result * 10 + digit;
	i++;
	}

	return (result * sign);
}
