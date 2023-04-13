#include <stdio.h>

/**
 * main - prints the number of args
 * @argc: arg count
 * @argv: arg vector
 * Return: always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
