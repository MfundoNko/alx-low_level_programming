#include <ctype.h>

/**
 * _isdigit - prints boolean of uppercase
 * @c: evaluated char
 *
 * Return: 1 or 0  depending on c
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
