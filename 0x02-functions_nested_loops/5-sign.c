#include "main.h"

/**
 * print_sign - Pints the sign of a number
 * @n: The number to checked
 * Return: 1 or positive numb, -1 for negative numb or
 * zero for anyhing else
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
