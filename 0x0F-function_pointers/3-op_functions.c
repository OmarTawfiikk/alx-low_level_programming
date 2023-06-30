#include "3-calc.h"
#include <stdlib>

/**
 * op_add - add two ints
 * @a: int a
 * @b: int b
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub two ints
 * @a: int a
 * @b: int b
 *
 * Return: sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mul two ints
 * @a: int a
 * @b: int b
 *
 * Return: mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - div two ints
 * @a: int a
 * @b: int b
 *
 * Return: div
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - mod two ints
 * @a: int a
 * @b: int b
 *
 * Return: mod
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a + b);
}
