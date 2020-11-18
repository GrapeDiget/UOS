#include <stdio.h>

int main()
{
	int m, n, i, k;
	int cntRelation=0;
	int cntReflective=0;
	int isSymmetric=1;
	int isTransitive=1;
	int W[9][8][8];
	
	char* A[8] = {"��", "�����", "�ø���", "����������", "�߾ӵ�����", "���Ƹ�", "���ǽ�", "������"};
	int relMatR[8][8] = {{0, 0, 1, 1, 0, 0, 0, 0},
						 {0, 0, 0, 0, 0, 0, 0, 0},
						 {0, 0, 0, 0, 1, 1, 1, 0},
						 {1, 0, 0, 0, 0, 0, 0, 0},
						 {0, 0, 0, 0, 0, 0, 0, 0},
						 {0, 0, 0, 0, 0, 0, 1, 1},
						 {0, 0, 0, 0, 0, 0, 0, 0},
						 {0, 1, 0, 1, 1, 0, 0, 0}};
	
	//A ��� 
	printf("A = {");
	for(m=0; m<8; m++) {
		printf("%s", A[m]);
		if(m!=7) {
			printf(", ");
		}
	}
	printf("} \n\n");
	
	//R ���� �� ��� 
	printf("R = {");
	for(m=0; m<8; m++) {
		for(n=0; n<8; n++) {
			if(relMatR[m][n] == 1) {
				if(cntRelation==0) 
					printf("(%s, %s)", A[m], A[n]);
				else 
					printf(", (%s, %s)", A[m], A[n]);
				cntRelation++;
			}
		}
	}
	printf("} \n\n");
	
	//w0 ���� 
	for(m=0; m<8; m++) {
		for(n=0; n<8; n++)
			W[0][m][n]=relMatR[m][n];
	}
	
	//w0 ��� 
	printf("W0 = \n");
	for(m=0; m<8; m++) {
		printf("(");
		for(n=0; n<8; n++)
			printf(" %d ", W[0][m][n]);
		printf(") \n");
	}
	printf("\n");
	
	//w1 ~ w8
	for(i=1; i<9; i++) {
		//wk ���� 
		for(m=0; m<8; m++) {
			for(n=0; n<8; n++) {
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
		for(m=0; m<8; m++) {
			printf("(");
			for(n=0; n<8; n++)
				printf(" %d ", W[i][m][n]);
			printf(") \n");
		}
		printf("\n");
	}
	
	//Connectivitiy Relation ���� �� ��� 
	cntRelation=0;
	
	printf("Connectivity Relation�� Relation Matrix\n");
	printf("{");
	for(m=0; m<8; m++) {
		for(n=0; n<8; n++) {
			if(W[8][m][n] == 1) {
				if(cntRelation==0) 
					printf("(%s, %s)", A[m], A[n]);
				else 
					printf(", (%s, %s)", A[m], A[n]);
				cntRelation++;
			}
		}
	}
	printf("} \n\n");


	printf("Relation R�� Property\n\n");
	
	// 1. Reflective relation aRa
	// aRa bRb cRc dRd eRe
	printf("Reflective Relation \n");
	for(m=0; m<8; m++) {
		if(relMatR[m][m] == 1) {
			cntReflective++;
			printf("(%s, %s) \n", A[m], A[m]);
		}
		else
			printf("(%s, %s)�� �����ϴ�! \n", A[m], A[m]);
	}
	printf("\n");
	
	if(cntReflective == 8)
		printf("Reflective Relation OK");
	else
		printf("NOT Reflective Relation");
	printf("\n\n");
	
	//2. Symmetric relation
	// aRb, bRa
	printf("Symmetric Relation \n");
	for(m=0; m<8; m++) {
		for(n=m; n<8; n++) {
			if(relMatR[m][n] == 1 && relMatR[n][m] == 1) 
				printf("(%s, %s)&(%s, %s)\n", A[m], A[n], A[n], A[m]);
			if(relMatR[m][n] != relMatR[n][m]) {
				printf("(%s, %s)�� ������ (%s, %s)�� �����ϴ�!\n", A[m], A[n], A[n], A[m]);
				isSymmetric = 0;
			}
		}
	}
	printf("\n");
	
	if(isSymmetric == 1)
		printf("Symmetric Relation OK");
	else
		printf("NOT Symmetric Relation");
	printf("\n\n");
		
	//3. Transitive relation
	//aRb, bRc -> aRc
	printf("Transitive Relation \n");
	for(m=0; m<8; m++) {
		for(n=0; n<8; n++) {
			if(relMatR[m][n] == 1) {
				for(k=0; k<8; k++) {
					if(relMatR[n][k] == 1) {
						if(relMatR[m][k] == 1)
							printf("(%s, %s) -> (%s, %s) => (%s, %s) \n", A[m], A[n], A[n], A[k], A[m], A[k]);
						else {
							printf("(%s, %s) -> (%s, %s) ������ (%s, %s)�� �����ϴ�!\n", A[m], A[n], A[n], A[k], A[m], A[k]);
							isTransitive = 0;
						}
					}
				}
			}	
		}
	}
	printf("\n");
	
	if(isTransitive == 1)
		printf("Transitive Relation OK");
	else
		printf("NOT Transitive Relation");
	printf("\n\n");
	
	//4. Equivalance Relation
	//Reflective & Symmetric & Transitive OK
	printf("Equivalance Relation \n");
	
	if(cntReflective == 8)
		printf("Reflective Relation OK & ");
	else
		printf("NOT Reflective Relation & ");
	
	if(isSymmetric == 1)
		printf("Symmetric Relation OK & ");
	else
		printf("NOT Symmetric Relation & ");
		
	if(isTransitive == 1)
		printf("Transitive Relation OK");
	else
		printf("NOT Transitive Relation");
	printf("\n");
	
	if(cntReflective == 8 && isSymmetric == 1 && isTransitive == 1)
		printf("Equivalance Relation OK");
	else
		printf("NOT Equivalance Relation");
		
	printf("\n\n");
	
	return 0;
}
