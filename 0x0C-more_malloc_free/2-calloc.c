#include "main.h"
#include <stdlib>

/**
 * _calloc - allocates memory
 * @nmemb: array length
 * @size: size of elemntes
 * Return: ...
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	void *p;

	if (size == 0 || nmemb == 0)
		return (NULL);

	l = nmemb * size;
	p = malloc(l);

	if (p == NULL)
		return (NULL);

	while (i < l)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}
