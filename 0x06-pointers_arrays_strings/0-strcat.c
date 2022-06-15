#include "main.h"
#include<string.h>

/**
 * _strcat -  catinates two char arrays
 * @dest: destination pointer
 * @src: source pointer
 * Return: result char pointer
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
