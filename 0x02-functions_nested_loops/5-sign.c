#include "main.h"

/**
 * print_sign - print +nif n is greater than zero, 0 if n is zero
 * 		and - if n is less than zero.
 * @n: takes integer type input for function.
 *
 * Return: 1 if +, 0 if and -1 if -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_puchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_puchar(48);
		return (0);
	}
	else
	{
		_puchar(45);
		return (-1);
	}
}
