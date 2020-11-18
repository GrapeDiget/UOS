#include <stdio.h>
#include <stdlib.h>

void print_address(int* px) {
	printf("변수값 = %d, 변수주소= %p \n", *px, px);
}

int main()
{
	int x = 10;
	printf("변수값 = %d, 변수주소= %p \n", x, &x);
	print_address(&x);
	printf("%d", sizeof(int*));
	
	return 0;
}
