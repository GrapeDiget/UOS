#include <stdio.h>

void asterisk (int i) {
	if(i>1) {
		asterisk(i/2);
		asterisk(i/2);
	}
	printf("*");
}

int main()
{
	asterisk(5);
	
	return 0;
}
