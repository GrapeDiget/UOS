// �ο� ��� ���� 
// ����������ǻ�Ͱ��к� 2017440018 ���ȣ
// 0526-1.c

#include<stdio.h>

int main()
{
	int m, n, k;
	int cntRelation=0;	
	char* A[9] = {"��", "����������", "�ø���", "���ǽ�", "�Ĵ�", "���Ƹ�", "������", "������", "���繫��"};
	
	int matA[9][9] = {{0,1,1,0,0,0,0,0,0},
					  {0,0,1,0,0,1,1,0,0},
					  {0,0,0,1,0,0,0,0,0},
					  {0,1,0,0,0,0,0,1,0},
					  {0,0,0,1,0,0,0,1,0},
					  {0,0,0,0,1,0,0,1,1},
					  {0,0,0,1,0,0,0,0,0},
					  {0,0,0,0,0,1,0,0,0},
					  {0,0,1,0,0,0,0,0,0}};
	int matB[4][3] = {{1,1,0},
					  {1,0,1},
					  {0,0,1},
					  {1,1,0}};					  
	int matC[3][3] = {{1,0,0},
					  {0,1,1},
					  {1,0,1}};
	int matResult[9][9];
	int matResult2[9][9];
	int matResult3[9][9];
	

	
	// A @ A Boolean product
	printf("< B @ C > Boolean Product\n");
	for(m=0; m<9; m++) {
		for(n=0; n<9; n++) {
				for(k=0; k<9; k++) {
					if(matA[m][k]==1 && matA[k][n]==1) {
						matResult[m][n] = 1;
						break;
						}
					else
						matResult[m][n] = 0;
					}
		}
	}
	
	for(m=0; m<9; m++) {
		for(n=0; n<9; n++) {
				for(k=0; k<9; k++) {
					if(matResult[m][k]==1 && matA[k][n]==1) {
						matResult2[m][n] = 1;
						break;
						}
					else
						matResult2[m][n] = 0;
					}
		}
	}

	for(m=0; m<9; m++) {
		for(n=0; n<9; n++) {
				for(k=0; k<9; k++) {
					if(matResult2[m][k]==1 && matA[k][n]==1) {
						matResult3[m][n] = 1;
						break;
						}
					else
						matResult3[m][n] = 0;
					}
		}
	}	
	
	for(m=0; m<9; m++) {
		printf(" ( ");
		for(n=0; n<9; n++)
			printf(" %d ", matResult[m][n]);
		printf(" ) \n");
	}	
	printf("\n");
	
	//R ���� �� ��� 
	printf("R = {");
	for(m=0; m<9; m++) {
		for(n=0; n<9; n++) {
			if(matResult[m][n] == 1) {
				if(cntRelation==0) 
					printf("(%s, %s)", A[m], A[n]);
				else 
					printf(", (%s, %s)", A[m], A[n]);
				cntRelation++;
			}
		}
	}
	printf("} \n\n");
	
	return 0;
}
