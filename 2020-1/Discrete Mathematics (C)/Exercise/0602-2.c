// Composite Relation
// 전자전기컴퓨터공학부 2017440018 김민호
// 0602-2.c

#include<stdio.h>

void booleanProduct(int relMatA[5][5], int relMatB[5][5], int resultMat[5][5]);
void printRelation(int Matrix[5][5]);

int main()
{
	int relMatR[5][5] = {{0, 1, 0, 0, 0},
						 {0, 1, 0, 0, 0},
						 {0, 0, 0, 1, 0},
						 {0, 0, 0, 0, 0},
						 {0, 0, 0, 0, 0}};
			 
	int relMatS[5][5] = {{0, 0, 1, 0, 0},
						 {0, 0, 0, 0, 1},
						 {1, 0, 0, 0, 0},
						 {0, 1, 0, 0, 0},
						 {0, 0, 0, 0, 0}};
	
	int tempMat[5][5];
	int resultMat[5][5];
	
	//1. R o S
	printf("1. R o S = ");
	booleanProduct(relMatR, relMatS, resultMat);
	printRelation(resultMat);
	
	//2. S o R
	printf("2. S o R = ");
	booleanProduct(relMatS, relMatR, resultMat);
	printRelation(resultMat);
	
	//3. R o (S o R)
	printf("3. R o (S o R) = ");
	booleanProduct(relMatS, relMatR, tempMat);
	booleanProduct(relMatR, tempMat, resultMat);
	printRelation(resultMat);
	
	//4. (R o S) o R
	printf("4. (R o S) o R = ");
	booleanProduct(relMatR, relMatS, tempMat);
	booleanProduct(tempMat, relMatR, resultMat);
	printRelation(resultMat);
	
	//5. R o R
	printf("5. R o R = ");
	booleanProduct(relMatR, relMatR, resultMat);
	printRelation(resultMat);
	
	//6. R o R o R
	printf("6. R o R o R = ");
	booleanProduct(relMatR, relMatR, tempMat);
	booleanProduct(tempMat, relMatR, resultMat);
	printRelation(resultMat);
	
	return 0;
}

void booleanProduct(int relMatA[5][5], int relMatB[5][5], int resultMat[5][5])
{
	int m, n, k;
	for(m=0; m<5; m++) {
		for(n=0; n<5; n++) {
				for(k=0; k<5; k++) {
					if(relMatA[m][k]==1 && relMatB[k][n]==1) {
						resultMat[m][n] = 1;
						break;
						}
					else
						resultMat[m][n] = 0;
					}
		}
	}
}

void printRelation(int Matrix[5][5])
{
	int m, n;
	int cntRelation=0;
	
	for(m=0; m<5; m++) {
		for(n=0; n<5; n++) {
			if(Matrix[m][n] == 1) {
				if(cntRelation==0) 
					printf("{(%d, %d)", m+1, n+1);
				else 
					printf(", (%d, %d)", m+1, n+1);
				cntRelation++;
			}
		}
	}
	printf("} \n\n");
}
