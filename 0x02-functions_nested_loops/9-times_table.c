#include "main.h"

/**
 * times_table - prints 9 times table
 */
void times_table(void)
{
	int x = 0, y, t;

	while (x < 10)
	{
		y = 0;

		while (y < 9)
		{
			t = y * x;

			if (t > 9)
			{
				_putchar((t / 10) + '0');
				_putchar((t % 10) + '0');
				_putchar(',');
				_putchar(' ');
			} else
			{
				_putchar(t + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			y++;
		}
		t = y * x;

		if (t > 9)
		{
			_putchar((t / 10) + '0');
			_putchar((t % 10) + '0');
		} else
		{
			_putchar(t + '0');
		}
		_putchar('\n');
		x++;
	}
}