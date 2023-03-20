#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all alphabet except e and q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII representation*/
		putchar(digit + '0');
		digit++;
	}
	printf('\n');

	return (0);
}
