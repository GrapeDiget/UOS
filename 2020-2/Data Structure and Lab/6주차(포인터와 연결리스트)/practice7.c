#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *arr, n, k;
	printf("������ ����: "); 
	scanf("%d", &n);
	arr = (int*) malloc(sizeof(int)*n);
	
	for(k=0; k<n; k++) {
		printf("���� #%d:", k);
		scanf("%d", arr+k);
	}
	
	return 0;
}
