#include "variadic_functions.h"

/**
 * print_numbers - prints number with separator
 * @separator: the string separator
 * @n: num of args
 * @...: the int to print
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = n;
	char *str;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)",
				i ? (separator ? separator : "" ): "\n");
	va_end(ap);
}
