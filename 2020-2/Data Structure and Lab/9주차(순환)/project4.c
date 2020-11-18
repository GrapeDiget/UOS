#include <stdio.h>

int Ackermann(int m, int n) {
	if(m==0) return n+1;
	if(m>0 && n==0)  return Ackermann(m-1, 1);
	return Ackermann(m-1, Ackermann(m, n-1));
}

int main()
{
	int i, j;
	
	for(i=0; i<4; i++) {
		for(j=0; j<5; j++) {
			printf("%d \t", Ackermann(i, j));
		}
		printf("\n");
	}
	
	return 0;
}
