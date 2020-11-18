// Relation matrix 
// ����������ǻ�Ͱ��к� 2017440018 ���ȣ
// 0519-2.c

#include<stdio.h>

int main()
{
	int m, n, cnt=0;
	int relmat[5][5] = {{0, 1, 0, 0, 0},
						{0, 1, 1, 1, 1},
						{0, 0, 0, 0, 0},
						{0, 0, 1, 0, 0},
						{1, 0, 0, 1, 0}};
	
	printf("R = {");
	for(m=0; m<5; m++) {
		for(n=0; n<5; n++) {
			if(relmat[m][n] == 1) {
				if(cnt==0) {
					printf("(%i, %i)", m+1, n+1);
					cnt++;
				}
				else 
					printf(", (%i, %i)", m+1, n+1);
			}
		}
	}
	printf("} \n");
	
	return 0;
}
