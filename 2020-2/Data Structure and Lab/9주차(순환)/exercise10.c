#include <stdio.h>

int binomial_rec (int n, int k) {
	if(k==0 || k == n) return 1;
	return binomial_rec(n-1, k-1) + binomial_rec(n-1, k);
}

int factorial(int n) {
	int result = 1;
	for( ; n>=1; n--)
		result *= n;
	return result;
}

int binomial_for(int n, int k) {
	if(k == 0 || k == n) return 1;
	return factorial(n) / (factorial(k) * factorial (n-k));
}

int main()
{
	printf("[recursive]5 combiantion 3 is %d \n", binomial_rec(5, 3));
	printf("[for]      5 combiantion 3 is %d \n", binomial_for(5, 3));
	
	return 0;
}
