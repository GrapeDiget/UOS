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
		printf("fibo(%2d) = %2d��\n", i, freq[i]);
		sum += freq[i];
	}
	printf("\n");
	printf("�� %3d���� fibo()�� ȣ��Ǿ����ϴ�.\n", sum);
}

int main()
{
	initFreq();
	long ans = fibo(10);
	printFreq();
	
	printf("fibo(10)�� ���� ���: %ld \n", ans);
	
	return 0;
}
