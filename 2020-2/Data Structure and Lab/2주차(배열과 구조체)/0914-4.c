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
	
	printf("���׽� A�� ������ ���Ͽ� �Է��Ͻʽÿ�.\n"); 
	readSPoly(&a);
	
	printf("���׽� B�� ������ ���Ͽ� �Է��Ͻʽÿ�.\n"); 
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
		printf("��� ���� �Է�(����:-1): ");
		scanf("%f%d", &(p->term[p->nTerms].coeff), &(p->term[p->nTerms].expon));
		if(p->term[p->nTerms].expon < 0) {
			printSPoly(p, "�Է� ���׽�: ");
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
	for(; (i<a->nTerms) || (j<b->nTerms);) {									//i�� a�� ���� ������ ��������, j�� b�� ���� ������ �������� ���� �ݺ� 
		if((i == a->nTerms) || (a->term[i].expon < b->term[j].expon)) {			//i�� a�� ���� ������ �������ų�, b�� j��° ���� ������ a�� i��° ���� �������� �������
			c->term[c->nTerms] = b->term[j];									//b�� j��° ���� c�� nTerms��° �׿� �����Ѵ�.			
			c->nTerms++;														//c�� nTerms�� �ϳ� ������Ų��. 
			j++;																//b�� ���� ���� Ž���Ѵ�.
		}
		else if((j == b->nTerms) || (a->term[i].expon > b->term[j].expon)) {	//j�� b�� ���� ������ �������ų�, b�� j��° ���� ������ a�� i��° ���� �������� ū���
			c->term[c->nTerms] = a->term[i];									//a�� i��° ���� c�� nTerms��° �׿� �����Ѵ�.
			c->nTerms++;														//c�� nTerms�� �ϳ� ������Ų��. 
			i++;																//a�� ���� ���� Ž���Ѵ�.
		}
		else {																	//b�� j��° ���� ������ a�� i��° ���� ������ �������
			c->term[c->nTerms] = a->term[i];									//a�� i��° ���� c�� nTerms��° �׿� ������ �� 
			c->term[c->nTerms].coeff += b->term[j].coeff; 						//b�� j��° ���� ����� c�� nTerms��° ���� ����� ���Ѵ�.
			c->nTerms++;														//c�� nTerms�� �ϳ� ������Ų��. 
			i++;																//a�� ���� ���� Ž���Ѵ�.
			j++;																//b�� ���� ���� Ž���Ѵ�.
		}
	}
}
