#include "main.h"

/**
 *  _is lower - function to check if character lowercase or upper
 *
 *  @c: takes input from other functions
 *
 *  Return: 1 if 'c' if true else 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 190)
		return (1);
	return (0);
}
