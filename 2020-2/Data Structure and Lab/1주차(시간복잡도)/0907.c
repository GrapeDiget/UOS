#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sumAlgorithmA(int num);			//O(1) 알고리즘 
int sumAlgorithmB(int num);			//O(n) 알고리즘 
int sumAlgorithmC(int num);			//O(n^2) 알고리즘 
int sequential_search(int list[], int n, int key);

int main()
{
	clock_t start, finish;
	double duration;
	int i=0;
	int k=0;
	int glist[10] = {5, 6, 7, 8, 10, 12, 1, 0, 12, 18};
	
	for(k=2000; k<=30000; k+=2000) {
		start = clock();
		for(i=0; i<100; i++) sumAlgorithmC(k);
		//for(k=0; k<1000000; k++_ sequential_search(glist, 10, 12);
		finish = clock();
		
		duration = (double)(finish - start) / CLOCKS_PER_SEC;
		printf("n=%d일 때 %f초 입니다.\n", k,duration); 
	}
	return 0;
}

int sumAlgorithmA(int num)
{
	return num*(num+1)/2;		//n*(n+1)/2 공식 사용
}

int sumAlgorithmB(int num)		//O(n) 알고리즘 
{
	int sum = 0;
	int i;
	for(i=1; i<=num; i++) {
		sum = sum + i;			//1+2+3+...+n
	}
	return sum;
}

int sumAlgorithmC(int num)		//O(n^2) 알고리즘 
{
	int sum = 0;
	int i, j;
	for (i=0; i<=num; i++) {
		for (j=1 ; j<=i; j++) {
			sum = sum + 1;		//0+(1)+(1+1)+(1+1+1)+...+(1+1+...+1)
		}
	}
	return sum;
}
