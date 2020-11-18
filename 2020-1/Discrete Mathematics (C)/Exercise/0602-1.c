// Equivalance Relation 
// 전자전기컴퓨터공학부 2017440018 김민호
// 0602-1.c

#include<stdio.h>

int main()
{
	int m, n, k;
	int cntRelation=0;
	int cntReflective=0;
	int isSymmetric=1;
	int isTransitive=1;
	
	int relMat[5][5] = {{1, 0, 0, 0, 1},
						{1, 1, 1, 1, 1},
						{0, 0, 1, 1, 1},
						{0, 0, 0, 1, 0},
						{0, 0, 0, 0, 1}};
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
			printf("(%c, %c) \n", data[m], data[m]);
		}
//		else
//			printf("x(%c, %c) \n", data[m], data[m]);
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
				printf("(%c, %c)&(%c, %c)\n", data[m], data[n], data[n], data[m]);
			if(relMat[m][n] != relMat[n][m]) {
//				printf("(%c, %c)X(%c, %c)\n", data[m], data[n], data[n], data[m]);
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
	for(m=0; m<5; m++) {
		for(n=0; n<5; n++) {
			if(relMat[m][n] == 1) {
				for(k=0; k<5; k++) {
					if(relMat[n][k] == 1) {
						if(relMat[m][k] == 1)
							printf("(%c, %c) -> (%c, %c) => (%c, %c) \n", data[m], data[n], data[n], data[k], data[m], data[k]);
						else {
//							printf("(%c, %c) -> (%c, %c) x> (%c, %c) \n", data[m], data[n], data[n], data[k], data[m], data[k]);
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
	
	if(cntReflective == 5)
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
	
	if(cntReflective == 5 && isSymmetric == 1 && isTransitive == 1)
		printf("Equivalance Relation OK");
	else
		printf("NOT Equivalance Relation");
		
	return 0;
}
