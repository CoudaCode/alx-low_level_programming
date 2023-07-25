#include "main.h"
/**
 * swap_int - inverse the numbers
 * @a: pointer to an int
 * @b: pointer to an int
 */

void swap_int(int *a, int *b)
{
	int tmps = 0;

	tmps = *b;
	*b = *a;
	*a = tmps;

}
