#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @m: the number to be computed
 * Return: Absolute value of number or zero
 */

int _abs(int m)
{
	if (m < 0)
	{
		int abs_val;

		abs_val = m * -1;
		return (abs_val);
	}
	return (m);
}
