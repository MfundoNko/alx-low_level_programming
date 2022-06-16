#include <string.h>
#include "main.h"

/**
 * puts2 - prints every other char
 * @str: to be printed
 */
void puts2(char *str)
{
	int x;

	for (x = 0; x < (int)strlen(str); x += 2)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
