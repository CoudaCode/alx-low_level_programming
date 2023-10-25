#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - Returns the length of a string.
 * @s : string
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\n')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
