#include "main.h"
#include <stdio.h>

/**
 * _strcat - function that concatenat two strings
 * @dest: the destination of string
 * @src: pointer to soutce input
 *
 * Retuen: always 0
 */

char *_strcat(char *dest, char *src)
{
	int c = 0, c2;

	while (dest[c])
	{
		c++;
	}

	for (c2 = 0; src[c2] != 0; c2++)
	{
		dest[c++] = src[c2];
	}

	dest[c] = '\0';
	return (dest);
}
