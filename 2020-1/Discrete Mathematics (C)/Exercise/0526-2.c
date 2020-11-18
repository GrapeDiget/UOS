// path 경로 
// 전자전기컴퓨터공학부 2017440018 김민호
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
	
	//모든 element에서 path 3인 경우 
	printf("모든 element에서 path 3인 경우 \n"); 
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
