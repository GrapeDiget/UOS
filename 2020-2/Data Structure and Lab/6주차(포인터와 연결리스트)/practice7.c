#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *arr, n, k;
	printf("정수의 개수: "); 
	scanf("%d", &n);
	arr = (int*) malloc(sizeof(int)*n);
	
	for(k=0; k<n; k++) {
		printf("정수 #%d:", k);
		scanf("%d", arr+k);
	}
	
	return 0;
}
