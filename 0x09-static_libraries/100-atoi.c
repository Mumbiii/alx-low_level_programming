#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: the string to convert
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = (result * 10) + (s[i] - '0');
		}
		else if (result > 0)
		{
			/* We've encountered a non-numeric character after parsing some digits*/
			break;
		}
		i++;
	}
	return (result * sign);
}
