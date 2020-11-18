// 예제 1-4 정수의 표현
// 전자전기컴퓨터공학부 2017440018 김민호
// 0331-1.c

#include <stdio.h>
#include <math.h>

int main()
{
	int m, n;
	int q, r;
	
	printf("m = q * n + r 에서 q와 r값을 계산하는 프로그램입니다. \n");
	
	printf("m = ");
	scanf("%d", &m);
	printf("n = ");
	scanf("%d", &n);
	printf("\n");
	
	for(r=0; r<abs(n); r++)
	{
		for(q=-100; q<=100; q++)
		{
			if(m == (q * n) + r)
			{
				printf("q = %i r = %i \n", q, r);
				break;
			}
		}
	}
	return 0;
}
