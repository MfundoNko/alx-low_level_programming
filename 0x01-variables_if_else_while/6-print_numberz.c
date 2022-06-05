#include <stdio.h>
#include <ctype.h>

/**
 * main - functions prints digits
 *
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
