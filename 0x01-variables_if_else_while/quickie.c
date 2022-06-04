#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char alpha[] ={'A','B','C','D','E','F','G','H','I','J','K','L','M',
		'N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	for(int x=0; x<26;x++){
		putchar(tolower(alpha[x]));
		//printf("%d\t", alpha[x]);
	}
	printf("\n");
	return 0;
}
