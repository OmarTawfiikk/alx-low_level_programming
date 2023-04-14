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
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);

	_memset(m, 0, sizeof(int) * nmemb);

	return (m);
}
