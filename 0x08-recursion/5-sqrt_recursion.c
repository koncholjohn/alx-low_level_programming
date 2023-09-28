#include "main.h"

/**
 * sqrt_n - return the natural square root of
 * a number
 * @n: input number
 * @c: iterator
 * Return: square root or -1
 */

int sqrt_n(int n, int c)
{
	if (c * c == n)
	{
		return (c);
	}
	else if (c * c > n)
	{
		return (-1);
	}
	return (sqrt_n(n, c + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of
 * a number
 * @n: the input number
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
return (sqrt_n(n, 0));
}
