#include "main.h"
/**
 * print_most_numbers - print first 10 digits
 * Return: 0 through 9 except 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if( i == 2 || i == 4)
		{
			continue;
		}
		_putchar('0' + i);
	}
	_putchar('\n');
}
