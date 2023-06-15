#include <stdio.h>

/**
 * main - prints all the content
 * @argc: arg count
 * @argv: arg vector
 * Return: always 0
 */

int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
