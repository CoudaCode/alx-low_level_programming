#include "main.h"
#include <stdio.h>
/**
 * factoriel - return the factorial of a number n.
 * @n: number
 *
 * Return : -1 if n is lower than 0, 1 if n is 0 or 1, else the factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
