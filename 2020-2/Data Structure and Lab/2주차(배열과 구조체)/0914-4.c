#include <stdio.h>
#define MAX_TERMS 80

typedef struct {
	int expon;
	float coeff;
} Term;

typedef struct {
	int nTerms;
	Term term[MAX_TERMS];
} SparsePoly;

void readSPoly(SparsePoly *p);
void printSPoly(SparsePoly *p, char str[]);
void addSPoly(SparsePoly *a,SparsePoly *b, SparsePoly *c);

int main()
{
	SparsePoly a, b, c, d, e;
	
	printf("다항식 A의 정보에 대하여 입력하십시오.\n"); 
	readSPoly(&a);
	
	printf("다항식 B의 정보에 대하여 입력하십시오.\n"); 
	readSPoly(&b);
	
	addSPoly(&a, &b, &c);

	printSPoly(&a, " A = ");
	printSPoly(&b, " B = ");
	printSPoly(&c, "A+B= ");
	
	return 0;
}

void readSPoly(SparsePoly *p) {
	p->nTerms = 0;
	while(1) {
		printf("계수 차수 입력(종료:-1): ");
		scanf("%f%d", &(p->term[p->nTerms].coeff), &(p->term[p->nTerms].expon));
		if(p->term[p->nTerms].expon < 0) {
			printSPoly(p, "입력 다항식: ");
			return;
		}
		p->nTerms++;
	}
}

void printSPoly(SparsePoly *p, char str[]) {
	int i;
	printf("%s", str);
	for(i=0; i<p->nTerms; i++) {
		printf("%5.1f", p->term[i].coeff);
		if(p->term[i].expon > 0)
			printf("x^%d", p->term[i].expon);
		if(i!=p->nTerms-1)
			printf(" +");
	}
	printf("\n\n");	
}

void addSPoly(SparsePoly *a,SparsePoly *b, SparsePoly *c) {
	int i=0;
	int j=0;
	
	c->nTerms = 0;
	for(; (i<a->nTerms) || (j<b->nTerms);) {									//i가 a의 항의 개수와 같아지고, j가 b의 항의 개수와 같아질때 까지 반복 
		if((i == a->nTerms) || (a->term[i].expon < b->term[j].expon)) {			//i가 a의 항의 개수와 같아지거나, b의 j번째 항의 지수가 a의 i번째 항의 지수보다 작은경우
			c->term[c->nTerms] = b->term[j];									//b의 j번째 항을 c의 nTerms번째 항에 복사한다.			
			c->nTerms++;														//c의 nTerms를 하나 증가시킨다. 
			j++;																//b의 다음 항을 탐색한다.
		}
		else if((j == b->nTerms) || (a->term[i].expon > b->term[j].expon)) {	//j가 b의 항의 개수와 같아지거나, b의 j번째 항의 지수가 a의 i번째 항의 지수보다 큰경우
			c->term[c->nTerms] = a->term[i];									//a의 i번째 항을 c의 nTerms번째 항에 복사한다.
			c->nTerms++;														//c의 nTerms를 하나 증가시킨다. 
			i++;																//a의 다음 항을 탐색한다.
		}
		else {																	//b의 j번째 항의 지수와 a의 i번째 항의 지수가 같을경우
			c->term[c->nTerms] = a->term[i];									//a의 i번째 항을 c의 nTerms번째 항에 복사한 후 
			c->term[c->nTerms].coeff += b->term[j].coeff; 						//b의 j번째 항의 계수를 c의 nTerms번째 항의 계수와 더한다.
			c->nTerms++;														//c의 nTerms를 하나 증가시킨다. 
			i++;																//a의 다음 항을 탐색한다.
			j++;																//b의 다음 항을 탐색한다.
		}
	}
}
