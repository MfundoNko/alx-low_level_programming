#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints last digit
 * @n: number to be checked
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	_putchar('0' + (abs(n) % 10));
	return (abs(n) % 10);
}
