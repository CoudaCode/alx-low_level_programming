#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - Calculate the value of x raised to the power of y.
 * @x: The base.
 * @y: The exponent.
 *
 * Return: The result of x^y, or -1 if y is lower than 0. If x^y exceeds the
 *         maximum value an integer can hold, the behavior is undefined.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
