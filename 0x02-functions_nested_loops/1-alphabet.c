#include "main.h"

/*
 * print_alphabet - abcd
 * Desc: proints the alphabet in lowercase, followed by a new line
 * Return: void
 */

void print_alphabet(void)
{
	char a[26] = "abcdefghijklmopqrstuvwxyz";
	int i;

	for( i = 0; i < 26; i++)
		_putchar(a[i]);
	_putchar('\n');
}
