// Connectivity Relation
// ����������ǻ�Ͱ��к� 2017440018 ���ȣ
// 0609-1.c

#include<stdio.h>
int main()
{
	int m, n, i;
	int cntRelation=0;
	int W[10][9][9];
	
	char* A[9] = {"��", "����������", "�ø���", "���ǽ�", "�Ĵ�", "���Ƹ�", "������", "������", "���繫��"};
	int relMatR[9][9] ={{0,1,1,0,0,0,0,0,0},
					  {0,0,1,0,0,1,1,0,0},
					  {0,0,0,1,0,0,0,0,0},
					  {0,1,0,0,0,0,0,1,0},
					  {0,0,0,1,0,0,0,1,0},
					  {0,0,0,0,1,0,0,1,1},
					  {0,0,0,1,0,0,0,0,0},
					  {0,0,0,0,0,1,0,0,0},
					  {0,0,1,0,0,0,0,0,0}};
	

	
	
	//w0 ���� 
	for(m=0; m<9; m++) {
		for(n=0; n<9; n++)
			W[0][m][n]=relMatR[m][n];
	}
	
	//w0 ��� 
	printf("W0 = \n");
	for(m=0; m<9; m++) {
		printf("(");
		for(n=0; n<9; n++)
			printf(" %d ", W[0][m][n]);
		printf(") \n");
	}
	printf("\n");
	
	//w1 ~ w4
	for(i=1; i<10; i++) {
		//wk ���� 
		for(m=0; m<9; m++) {
			for(n=0; n<9; n++) {
				//wk step 1 
				W[i][m][n] = W[i-1][m][n];
				
				//wk step 2
				if(W[i-1][m][i-1] == 1 && W[i-1][i-1][n] == 1) {
					//wk step 3
					W[i][m][n] = 1;
				}
			}
		}
		
		//wk ��� 
		printf("W%d = \n", i);
		for(m=0; m<9; m++) {
			printf("(");
			for(n=0; n<9; n++)
				printf(" %d ", W[i][m][n]);
			printf(") \n");
		}
		printf("\n");
	}
	
	//Connectivitiy Relation ���� �� ��� 
	cntRelation=0;
	
	printf("Connectivity Relation = {");
	for(m=0; m<4; m++) {
		for(n=0; n<4; n++) {
			if(W[4][m][n] == 1) {
				if(cntRelation==0) 
					printf("(%d, %d)", m+1, n+1);
				else 
					printf(", (%d, %d)", m+1, n+1);
				cntRelation++;
			}
		}
	}
	printf("} \n\n");
	
	return 0;
}
