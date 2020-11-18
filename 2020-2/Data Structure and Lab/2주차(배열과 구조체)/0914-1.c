#include <stdio.h>

int main()
{
	int two[10];
	int mul, i, j;
	for(i=0; i<10; i++) {
		mul = 1;
		for(j=0; j<i; j++) {
			mul *= 2;
		}
		two[i] = mul;
	}
	for(i=0; i<10; i++) {
		printf("%d => %d \n", i, two[i]);
	}
	return 0;
}
