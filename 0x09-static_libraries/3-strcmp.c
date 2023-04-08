#include "main.h"

/**
 * _strcmp - Compares pointers to string
 * @s1: A pointer for first string
 * @s2: A pointer for second string
 * Return: If str1 < str2, the negative difference of the first
 * unmatched characters.
 * if str1 == str2, 0
 * If stri > str2, the positive difference of the first unmatched characters.
 */

int _strcmp(char *s1, char *s2)

{

	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);

}
