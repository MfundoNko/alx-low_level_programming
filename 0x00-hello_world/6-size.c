#include <stdio.h>


/**
 * main - prints sizes of the int, char and float
 *
 *Return:0
 */
int main(void) /* uses puts() and returns 0*/
{
	printf("Size of a char: %d bytes(s)\n",(int)sizeof(char));
	printf("Size of an int: %d bytes(s)\n",(int)sizeof(int));
	printf("Size of a long int: %d bytes(s)\n",(int)sizeof(long int));
	printf("Size of a long long int: %d bytes(s)\n",(int)sizeof(long long int));
	printf("Size of a float: %d bytes(s)\n",(int)sizeof(float));
	return (0);
}
