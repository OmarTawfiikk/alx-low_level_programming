#include "main.h"

/**
 * print_alphabet - unilizes on the _putchar funcion prints the alphabet a-z
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
