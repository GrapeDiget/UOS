// path ��� 
// ����������ǻ�Ͱ��к� 2017440018 ���ȣ
// 0526-2.c

#include<stdio.h>

int main()
{
	int m, n, k, l;
	int cnt=0;
	
	int relMat[5][5] = {{0, 1, 0, 0, 0},
						{0, 1, 1, 1, 1},
						{0, 0, 0, 0, 0},
						{0, 0, 1, 0, 0},
						{1, 0, 0, 1, 0}};
	
	printf("R = {");
	for(m=0; m<5; m++) {
		for(n=0; n<5; n++) {
			if(relMat[m][n] == 1) {
				if(cnt==0) {
					printf("(%i, %i)", m+1, n+1);
					cnt++;
				}
				else 
					printf(", (%i, %i)", m+1, n+1);
			}
		}
	}
	printf("} \n\n");
	
	//��� element���� path 3�� ��� 
	printf("��� element���� path 3�� ��� \n"); 
	for(m=0; m<5; m++) {
		for(n=0; n<5; n++) {
			if(relMat[m][n] == 1) {
				for(k=0; k<5; k++) {
					if(relMat[n][k] == 1) {
						for(l=0; l<5; l++) {
							if(relMat[k][l] == 1) {
								printf("(%d, %d) --> (%d, %d) --> (%d, %d)\n", m+1, n+1, n+1, k+1, k+1, l+1);
							}
						}
					}	
				}
			}
		}
	}
		 
	return 0;
}
