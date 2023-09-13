#include "main.h"
/**
 * print_sign - print sign of the number
 * @n: the character to be checked
 * Return: 1 if n>0| -1 if n <0| else 0
 */
int print_sign(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n > 0)
	{
		return (1);
	}
	return (0);
}
