// Warcharll 알고리즘 
// 전자전기컴퓨터공학부 2017440018 김민호
// 0602-3.c

#include<stdio.h>
int main()
{
	int m, n;
	int relMat[4][4] = {{0, 1, 0, 0},
						{1, 0, 1, 0},
						{0, 0, 0, 1},
						{0, 0, 0, 0}};
	
	int w0[4][4];
	int w1[4][4];
	int w2[4][4];	
	int w3[4][4];	
	int w4[4][4];	
	
	//w0
	for(m=0; m<4; m++) {
		for(n=0; n<4; n++)
			w0[m][n]=relMat[m][n];
	}
	
	printf("w0 = \n");
	for(m=0; m<4; m++) {
		printf("{");
		for(n=0; n<4; n++)
			printf(" %d ", w0[m][n]);
		printf("} \n");
	}
	printf("\n");
	
	//w1
	for(m=0; m<4; m++) {
		for(n=0; n<4; n++) {
			w1[m][n]=w0[m][n];

			if(w0[m][0] == 1 && w0[0][n] == 1)
				w1[m][n] = 1;
			}
	}
	
	printf("w1 = \n");
	for(m=0; m<4; m++) {
		printf("{");
		for(n=0; n<4; n++)
			printf(" %d ", w1[m][n]);
		printf("} \n");
	}
	printf("\n");
	
	return 0;
}
