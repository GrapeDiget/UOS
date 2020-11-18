#include <stdio.h>

int sum (int n) {
	printf("sum(%d) is called \n", n);
	if(n == 1) return 1;
	return n + sum(n-1);
}

int main()
{
	int res = 0;
	res = sum(10);
	
	printf("result = %d", res);
	
	return 0;
}
