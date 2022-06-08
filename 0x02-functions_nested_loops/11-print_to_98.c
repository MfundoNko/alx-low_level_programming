#include "main.h"

/**
 * print_2D - prints 2 digit int
 * @p: number to be printed
 */
void print_2D(int p)
{
	_putchar('0' + (p / 10));
	_putchar('0' + (p % 10));
}
/**
 * print_char - prints chars
 */
void print_char(void)
{
	_putchar(',');
	_putchar(' ');
}
/**
 * print_end - prints last part
 */
void print_end(void)
{
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
/**
 * print_to_98 - prints natural numbers
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
			print_2D(n);
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
			print_2D(n);
			n--;
		}
		print_char();
	}
	print_end();
}
