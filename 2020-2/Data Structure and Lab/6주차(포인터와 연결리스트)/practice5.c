#include <stdio.h>
#include <stdlib.h>

void print_address(int* px) {
	printf("������ = %d, �����ּ�= %p \n", *px, px);
}

int main()
{
	int x = 10;
	printf("������ = %d, �����ּ�= %p \n", x, &x);
	print_address(&x);
	printf("%d", sizeof(int*));
	
	return 0;
}
