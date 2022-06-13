#include <string.h>
#include "main.h"

/**
 * puts_half -  prints half string
 * @str: string
 */
void puts_half(char *str)
{
	int x = strlen(str), n;

	if ((x % 2) == 0)
	{
		n = x / 2;
	} else
	{
		n = (x - 1) / 2;
	}
	for (; n < x; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
