/*
 * add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The result of the addition.
 */
int add(int a, int b)
{
	return (a + b);
}

/*
 * sub - Subtracts two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The result of the subtraction.
 */
int sub(int a, int b)
{
	return (a - b);
}

/*
 * mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The result of the multiplication.
 */
int mul(int a, int b)
{
	return (a * b);
}

/*
 * div - Divides two integers.
 * @a: The dividend.
 * @b: The divisor.
 * Return: The result of the division, or 0 if division by zero.
 */
int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		return (0);
	}
}

/*
 * mod - Calculates the modulo of two integers.
 * @a: The dividend.
 * @b: The divisor.
 * Return: The result of the modulo, or 0 if division by zero.
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		return (0);
	}
}
