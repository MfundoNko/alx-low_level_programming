#include<stdio.h>

/**
 * main - prints 1-100 except for some multiples
 * If multiple 5, prints "buzz" else if multiple 3
 * it prints "fizz"
 *
 * Return: 0 if successful
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (((x % 3) != 0) && ((x % 5) != 0))
		{
			printf("%d ", x);
		} else
		{
			if (((x % 3) == 0) && ((x % 5) == 0))
			{
				printf("FizzBuzz ");
			} else if ((x % 3) == 0)
			{
				printf("Fizz ");
			} else if ((x % 5) == 0)
			{
				printf("Buzz ");
			}
		}
	}
	return (0);
}
