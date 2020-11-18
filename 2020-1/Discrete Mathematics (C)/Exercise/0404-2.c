// 행렬의 곱셈 
// 전자전기컴퓨터공학부 2017440018 김민호
// 0404-2.c

#include <stdio.h>
 
int main()
{
	int i, j, k;
	int arr1[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
	int arr2[4][4] = {{4,3,2,1}, {8,7,6,5}, {12,11,10,9}, {16,15,14,13}};
	int res[4][4] = {0};
	
	printf("arr1\n");
	for (i=0; i<4; i++)
	{
		for (j=0; j<4; j++)
		{
			printf("%4d", arr1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	printf("arr2\n");
	for (i=0; i<4; i++)
	{
		for (j=0; j<4; j++)
		{
			printf("%4d", arr2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for (i=0; i<4; i++)
	{
		for (j=0; j<4; j++)
		{
			for (k=0; k<4; k++)
			{
				res[i][j] += arr1[i][k] * arr2[k][j];
			}
		}
	}
	
	printf("res = arr1 * arr2\n");
	for (i=0; i<4; i++)
	{
		for (j=0; j<4; j++)
		{
			printf("%4d", res[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	return 0;
}
