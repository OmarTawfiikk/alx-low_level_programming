#include "main.h"
#include <stdio.h>

/**
 * _strcat - function that concatenat two strings
 * @src: pointer to soutce input
 *
 * Retuen: always 0
 */

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c=0;
	/*find the size*/
	while (dest[c])
		c++;

	for (c2 = 0; src[c2], c2++)
		dest[c++] = src[c2];

	return (dest);
}
