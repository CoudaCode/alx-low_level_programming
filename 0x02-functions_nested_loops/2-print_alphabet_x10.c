#include "main.h"
/**
 * print_alphabet_x10 - find the alphabet letters in lowercase x 10
 * Description : This program prints the alphabet ten times.
 * Return : 0
 *
 */

void print_alphabet_x10(void)
{

	char charac;
	int i;

	i = 0;
	while (i < 10)
	{
		charac = 'a';
		while (charac <= 'z')
		{
			_putchar(charac);
			charac++;
		}
		i++;
		_putchar('\n');
	}
}

