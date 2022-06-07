#include <stdio.h>
#include <ctype.h>

/**
 * main - functions prints lowercase chars
 *
 * Return: 0
 */
int main(void)
{
	const char alpha[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G',
		'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
		'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (x = 0; x < 6; x++)
	{
		putchar(tolower(alpha[x]));
	}
	putchar('\n');
	return (0);
}