#include "main.h"

/**
 * _memcpy - Entry gate
 * @dest: input val
 * @src: input val2
 * @n: input val3
 * Return: Always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
