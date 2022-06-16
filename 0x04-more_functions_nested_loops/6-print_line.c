#include "main.h"
#include<stdio.h>

/**
 * print_line - prints line char n times
 * @n: number of chars to be printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
