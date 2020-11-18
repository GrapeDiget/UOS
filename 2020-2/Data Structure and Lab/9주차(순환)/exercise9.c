#include <stdio.h>

double cal (int n) {
	if(n==1) {
		printf("1");
		return 1.0;
	}
	printf("1/%d + ", n);
	return 1.0/n + cal(n-1);
}

int main()
{
	double res=0.0;
	
	res = cal(100);
	printf(" = %f\n", res);
	
	return 0;
}
