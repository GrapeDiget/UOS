#include <stdio.h>
#include <stdlib.h>

void print_array(int *a, int len) {
	int n;
	
	printf("¹è¿­: ");
	for(n = 0; n<len; n++)
		printf("%4d", a[n]);
	printf("\n");
}

int main()
{
	int arr[6] = {1, 2, 3, 4, 5, 6};
	print_array(arr, 6);
	
	return 0;
}
