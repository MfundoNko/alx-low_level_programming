#include <stdio.h>

/**
 * main - prints a string
 *
 * Return: 0
 */
int main(void)
{
	char my_string[] = {'_', 'p', 'u', 't', 'c', 'h',
	'a', 'r'};

	int x = 0;

	while (x <= 7)
	{
		putchar(my_string[x]);
		x++;
	}
	putchar('\n');
	return (0);
}
