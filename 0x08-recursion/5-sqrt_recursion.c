#include "main.h"

/**
 * _sqrt_recursion -> sqrt using recursion
 * @n: parameter to be sqrt
 * Return: square root of a number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt -> recursive square root
 * @n: integer paramtr
 * @i: integer parameter
 * Return: sqrt
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square > n)
		return (i);
	return (_sqrt(n, i + 1));
}
