#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: integer to find square root of
 *
 * Return: natural square root of @n or -1 if no natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - helper function to find natural square root of a number.
 *
 * @n: integer to find square root of
 * @i: current integer to test as a potential square root
 *
 * Return: natural square root of @n or -1 if no natural square root
 */

int sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_helper(n, i + 1));
}
