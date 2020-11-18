#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double power(double x, int n) {
	if(n==0) return 1;
	else if ((n%2) == 0)
		return power(x*x, n/2);
	else
		return x*power(x*x, (n-1)/2);
}

double power2(double x, int n) {
	if (n==0) return 1;
	return x*power2(x, n-1);
}

double slow_power(double x, int n) {
	int i;
	double result = 1.0;
	for(i=0; i<n; i++)
		result = result*x;
	return result;
}

int main()
{
	int i;
	clock_t t1, t2;
	double result1, result2, result3, result4;
	
	printf("Power... \n");
	t1 = clock();
	for (i = 0; i < 10000000; i++)
		result1 = power(2, 50);
	t2 = clock();
	printf("%lf[sec]\n", (double)(t2-t1) / CLOCKS_PER_SEC);
	printf("연산 결과: %lf\n", result1); 
	
	printf("\n");
	
	printf("Power2... \n");
	t1 = clock();
	for (i = 0; i < 10000000; i++)
		result2 = power2(2, 50);
	t2 = clock();
	printf("%lf[sec]\n", (double)(t2-t1) / CLOCKS_PER_SEC);
	printf("연산 결과: %lf\n", result2); 
	
	printf("\n");
	
	printf("Slow_Power... \n");
	t1 = clock();
	for (i = 0; i < 10000000; i++)
		result3 = slow_power(2, 50);
	t2 = clock();
	printf("%lf[sec]\n", (double)(t2-t1) / CLOCKS_PER_SEC);
	printf("연산 결과: %lf\n", result3); 
	
	printf("\n");
	
	printf("Shift Power... \n");
	t1 = clock();
	for (i = 0; i < 10000000; i++)
		result4 = 2<<50;
	t2 = clock();
	printf("%lf[sec]\n", (double)(t2-t1) / CLOCKS_PER_SEC);
	printf("연산 결과: %lf\n", result3); 
		
	return 0;
}
	
	
	
	
