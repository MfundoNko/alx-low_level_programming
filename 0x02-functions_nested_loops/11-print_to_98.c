#include "main.h"

/**
 * print_to_98
 * @n: starting integer
 */
void print_to_98(int n)
{
	int x;

	while (n != 98)
	{
		if (n >= 0 && n < 10)
		{
			_putchar('0' + n);
			n++;
		} else if (n < 0 && n > -10)
		{
			x = n * (-1);
			_putchar('-');
			_putchar('0' + x);
			n++;
		} else if (n > 9 && n <= 97)
		{
			_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
			n++;
		} else if (n < -9 && n > -100)
		{
			x = n * (-1);
			_putchar('-');
			_putchar('0' + (x / 10));
			_putchar('0' + (x % 10));
			n++;
		} else if (n > 99)
		{
			x = n % 100;
			_putchar('0' + (n / 100));
			_putchar('0' + (x / 10));
			_putchar('0' + (x % 10));
			n--;
		} else if (n == 99)
		{
			_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
			n--;
		}
		_putchar(',');
		_putchar(' ');
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
