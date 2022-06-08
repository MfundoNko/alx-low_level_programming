#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * print_last_digit - prints last digit
 * @n: number to be checked
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	unsigned int temp = n + (UINT_MAX +1);
	_putchar('0' + (temp % 10));
	return (temp % 10);
}
