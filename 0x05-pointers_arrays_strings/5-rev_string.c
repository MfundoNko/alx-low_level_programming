#include <string.h>

/**
 * rev_string - reverse string
 * @s: string in question
 */
void rev_string(char *s)
{
	int x =  strlen(s), y;

	char t[x + 1];

	y = 0;
	x -= 1;
	while ( x >= 0)
	{
		t[y] = s[x];
		x--;
		y++;
	}
	strcpy(s, t);
}
