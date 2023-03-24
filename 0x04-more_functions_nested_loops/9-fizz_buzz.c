#include "main.h"

/**
 * main - print number 1 - 100 dollowed by a new line
 * numbers that are multioles of 3 print Fizz
 * numbers that are multioles of 5 print Buzz
 * numbers that are multioles of 3 and 5 print FizzBuzz
 * each number and word to be swparated by space
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num == 1; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 3 == 0 && (num % 5 == 0))
			printf("FizzBuzz");

		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
