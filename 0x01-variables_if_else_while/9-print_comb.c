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
		if (x == '9')
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
