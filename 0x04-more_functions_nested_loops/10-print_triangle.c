#include "main.h"
#include<stdio.h>

/**
 * print_triangle - prints tri
 * @size: size of tri
 */
void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (x = 1; x =< size; x++)
	{
		for (y = 0; y < size; y++)
		{
			if (y >= (size - x))
			{
				_putchar('#');
			} else 
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
