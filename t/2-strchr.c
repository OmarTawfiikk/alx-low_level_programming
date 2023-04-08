#include "main.h"
#include <stdio.h>

/**
 * _strchr - entry gate
 * @s: input val1
 * @c: input val2
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}

