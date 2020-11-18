#include <stdio.h>

void printRev(int arr[], int n) {
	if(n<0) return;
	printf("¿ä¼Ò #%d: %d\n", n, arr[n]);
	printRev(arr, n-1);
}

int main()
{
	int arr[4] = {8, 6, 4, 2};
	printRev(arr, 3);
	
	return 0;
}
