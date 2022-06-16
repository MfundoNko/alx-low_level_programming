/**
 * swap_int - swaps a and b
 * @a: pointer for int
 * @b: pointer for int
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
