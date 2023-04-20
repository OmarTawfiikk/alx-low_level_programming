#include "function_pointers.h"

/**
 * int_index - search for  int
 * @array: inr arr
 * @size: arr size
 * @cmp: comp function
 *
 * Return: the int index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
