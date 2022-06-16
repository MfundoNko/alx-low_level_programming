#include "main.h"
#include<stdio.h>

/**
 * print_diagonal -  prints diagonal n times
 * @n: number of diagonals to print
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (x = 0; x < n; x++)
	{
		for (y = 0; y < n; y++)
		{
			if (y == x)
			{
				_putchar('\\');
				break;
			}
			_putchar(' ');
		}
		_putchar('\n');
	}
}
