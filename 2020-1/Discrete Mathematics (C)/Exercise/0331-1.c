// ���� 1-4 ������ ǥ��
// ����������ǻ�Ͱ��к� 2017440018 ���ȣ
// 0331-1.c

#include <stdio.h>
#include <math.h>

int main()
{
	int m, n;
	int q, r;
	
	printf("m = q * n + r ���� q�� r���� ����ϴ� ���α׷��Դϴ�. \n");
	
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
