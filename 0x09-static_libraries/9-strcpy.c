#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy string
 * @dest: Distination value
 * @src: Source value
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
