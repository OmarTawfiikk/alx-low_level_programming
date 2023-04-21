#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodees of itself
 * @argc: The number of args spplied in the prog
 * @argv: An array of pointer to the arg
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int bytes, imdex;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < bytes; index++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (index == byte - 1)
			continue;
		printf(" ");

		address++;
	}
	printf("\n");
	return (0);
}
