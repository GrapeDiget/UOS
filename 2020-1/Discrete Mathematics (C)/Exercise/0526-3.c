// Equivalance Relation 
// 전자전기컴퓨터공학부 2017440018 김민호
// 0526-3.c

#include<stdio.h>

int main()
{
	int m, n;
	int cntRelation=0;
	int cntReflective=0;
	int isSymmetric=1;
	int relMat[5][5] = {{1, 1, 0, 0, 1},
						{1, 1, 0, 1, 0},
						{0, 0, 1, 0, 0},
						{0, 1, 0, 1, 0},
						{1, 0, 0, 0, 1}};
	char data[5] = {'a', 'b', 'c', 'd', 'e'};
	
	
	printf("Relation R= {");
	for(m=0; m<5; m++) {
		for(n=0; n<5; n++) {
			if(relMat[m][n] == 1) {
				if(cntRelation==0) 
					printf("(%c, %c)", data[m], data[n]);
				else 
					printf(", (%c, %c)", data[m], data[n]);
				cntRelation++;
			}
		}
	}
	printf("} \n\n");
	
	// 1. Reflective relation aRa
	// aRa bRb cRc dRd eRe
	printf("Reflective Relation \n");
	for(m=0; m<5; m++) {
		if(relMat[m][m] == 1) {
			cntReflective++;
			printf("(%c, %c) ", data[m], data[m]);
		}
	}
	printf("\n");
	
	if(cntReflective == 5)
		printf("Reflective Relation OK");
	else
		printf("NOT Reflective Relation");
	printf("\n\n");
	
	//2. Symmetric relation
	// aRb, bRa
	printf("Symmetric Relation \n");
	for(m=0; m<5; m++) {
		for(n=m; n<5; n++) {
			if(relMat[m][n] == 1 && relMat[n][m] == 1) 
				printf("(%c, %c)&(%c, %c) ", data[m], data[n], data[n], data[m]);
			if(relMat[m][n] != relMat[n][m])
				isSymmetric = 0;
		}
	}
	printf("\n");
	
	if(isSymmetric == 1)
		printf("Symmetric Relation OK");
	else
		printf("NOT Symmetric Relation");
	printf("\n\n");
		
	//3. Transitive relation aRb, bRc -> aRc
	
	
	
	
	
	return 0;
}
