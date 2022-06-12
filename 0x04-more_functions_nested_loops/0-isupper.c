#include <ctype.h>

/**
 * _isupper - prints boolean of uppercase
 * @c: evaluated char
 *
 * Return: 1 or 0  depending on c
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
