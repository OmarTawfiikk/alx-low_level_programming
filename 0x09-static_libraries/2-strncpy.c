#include "main.h"

/**
 * _strncpy -  Copies at most an inputted number
 * of bytes from string src into dest
 * @dest: The buufer storing the string copy
 * @src: the soutce string
 * @n: The number of bytes from src to be copied
 * Return: A pointer to be resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)

{

	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);

}
