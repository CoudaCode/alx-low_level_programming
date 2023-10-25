#include "main.h"i
#include <stdio.h>
/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: string
 *
 * Return: On success 1.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(*s);
		return;
	}
	_putchar('\n');
	_puts_resursion(s + 1);
}
