#include "main.h"
#include <string.h>

/**
 * print_rev - prints in reverse
 * @s: input string
 */
void print_rev(char *s)
{
	int x = strlen(s) - 1;

	while (x >= 0)
	{
		_putchar(s[x]);
		x--;
	}
	_putchar('\n');
}
