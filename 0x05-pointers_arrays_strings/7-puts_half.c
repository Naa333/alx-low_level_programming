#include "main.h"

#include <string.h>

/**
 *puts_half - prints half
 *@str : string parameter
 */

void puts_half(char *str)
{
	int x, y, z;

	x = strlen(str);
	if (x % 2 == 1)
		y = x / 2 + 1;
	else
		y = x / 2;
	for (z = y; z < x; z++)
		_putchar(str[1]);
	_putchar('\n');
}

