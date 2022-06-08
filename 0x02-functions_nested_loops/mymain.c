#include <stdio.h>


int main()
{
	int n = 110 ,x;
	
	while (n != 98)
	{
		if (n >= 99)
		{
			/*x = n % 100;

			putchar('0' + (n/100));
			putchar('0' + (x/10));
			putchar('0' + (x%10));*/
			n = n-1;
			printf("%d", n);
			printf("\n");
			if ( n == 98)
				break;
		}
	}

	return 0;
}
