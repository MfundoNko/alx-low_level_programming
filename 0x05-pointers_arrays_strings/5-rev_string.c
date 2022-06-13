#include <string.h>

/**
 * rev_string - reverse string
 * @s: string in question
 */
void rev_string(char *s)
{
	int x =  strlen(s), y;

	char temp[500];

	y = 0;
	x -= 1;
	while (x >= 0)
	{
		temp[y] = s[x];
		x--;
		y++;
	}
	temp[y] = '\0';
	char *str = temp;

	for (x = 0; x < strlen(str); x++)
	{
		s[x] = str[x];
	}
}
