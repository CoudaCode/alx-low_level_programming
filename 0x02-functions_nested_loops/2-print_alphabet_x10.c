#include "main.h"
/**
 * print_alphabet_x10: print the alphabet ten
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
		while (charac < 'z')
		{
			_putchar(charac);
		}
		i++;
		_putchar('\n');
	}
	return (0);
}

