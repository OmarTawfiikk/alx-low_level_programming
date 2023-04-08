#include "main.h"
#include <stdio.h>

/**
 * _strlen - Return the length of a string
 * @s: The string to get the lengthof
 * Return: The length of @s
 */
int _strlen(char *s)

{
	size_t length = 0;

	while (*s++)
		length++;
	return (length);
}
