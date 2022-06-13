#include <stdio.h>

/**
 * print_array - prints elements of array
 * @a: array to be printed
 * @n: number of elements to be printed
 */
void print_array(int *a, int n)
{
	int x;

	if (n <= 0)
		return;

	for (x = 0; x < n; x++)
	{
		if (x == (n - 1))
		{
			printf("%d\n", a[x]);
			continue;
		}
		printf("%d, ", a[x]);
	}
}
