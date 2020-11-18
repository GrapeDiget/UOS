#include <stdio.h>

long fiboIter(int n) {
	long f0 = 0, f1 = 1, f;
	int i;
	
	if(n==0) return f0;
	if(n==1) return f1;
	for (i = 2; i<=n; i++) {
		f = f0 + f1;
		f0 = f1;
		f1 = f;
	}
	return f;
}

int main()
{
	int i = 10;
	long maxfibo;
	printf("최대 long 피보나치 값 \n");
	while(1) {
		maxfibo = fiboIter(i);
		if(maxfibo < 0) break;
		printf("fibo(%d) = %ld \n", i, maxfibo);
		i++;
	}
	printf("\n");
	printf("최대값: fibo(%d) = %ld \n", i-1, fiboIter(i-1));
	
	return 0;
}
