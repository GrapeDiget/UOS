#include <stdio.h>

static int freq[11];

long fibo(int n) {
	freq[n]++;
	if(n<=1) return n;
	return fibo(n-1) + fibo(n-2);
}

static void initFreq() {
	int i;
	for (i = 0; i<11; i++)
		freq[i] = 0;
}

static void printFreq() {
	int i;
	int sum = 0;
	for (i = 10; i >=0; i--) {
		printf("fibo(%2d) = %2d번\n", i, freq[i]);
		sum += freq[i];
	}
	printf("\n");
	printf("총 %3d번의 fibo()가 호출되었습니다.\n", sum);
}

int main()
{
	initFreq();
	long ans = fibo(10);
	printFreq();
	
	printf("fibo(10)의 연산 결과: %ld \n", ans);
	
	return 0;
}
