// 2x2����� ��Ľ� 
// ����������ǻ�Ͱ��к� 2017440018 ���ȣ
// 0404-3.c

#include <stdio.h>
 
int main()
{
	int i, j;
	int arr[2][2] = {{3,2},{4,6}};
	int det;
	
	printf("arr=\n");
	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	det = arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0];
	
	printf("det(arr) = %d", det);	
	
	return 0; 
}
