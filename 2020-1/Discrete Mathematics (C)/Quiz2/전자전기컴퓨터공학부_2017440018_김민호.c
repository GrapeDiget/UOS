// ���α׷��� ���� 2 
// ����������ǻ�Ͱ��к� 2017440018 ���ȣ
// ����������ǻ�Ͱ��к�_2017440018_���ȣ.c

#include<stdio.h>
#include<string.h>

void Quiz();
void PropositionalLogic();
void PowerSet();
void EquivalenceRelation();
void CompositeRelation();
void ConnectivityRelation_WarshallAlgorithm();

int main()
{
	int menu=0;
	
	while(1) {
		do {
			printf("\n\n");
			printf("===2020�� 1�б� �̻���� �ҽ�===\n");
			printf("0. Quiz \n"); 
			printf("1. Propositional Logic \n"); 
			printf("2. Power Set \n");	
			printf("3. Equivalence Relation \n");	
			printf("4. Composite Relation \n");	
			printf("5. Connectivity Relation (Warshall Algo.) \n");	
			printf("6. Quit \n");
			printf("================================\n");	
			printf("menu select: ");
			scanf("%d", &menu);
			getchar(); //stdin clear
		} while(!(0 <= menu && menu <= 7));
		printf("================================\n");
			
		switch(menu) {
		case 0:
			Quiz();
			printf("����Ϸ��� �ƹ� Ű�� �����ʽÿ� . . .");
			getch();
			break;
		
		case 1:
			PropositionalLogic();
			printf("����Ϸ��� �ƹ� Ű�� �����ʽÿ� . . .");
			getch();
			break;
		
		case 2:
			PowerSet();
			printf("����Ϸ��� �ƹ� Ű�� �����ʽÿ� . . .");
			getch();
			break;
					
		case 3:
			EquivalenceRelation();
			printf("����Ϸ��� �ƹ� Ű�� �����ʽÿ� . . .");
			getch();
			break;
		
		case 4:
			CompositeRelation();
			printf("����Ϸ��� �ƹ� Ű�� �����ʽÿ� . . .");
			getch();
			break;
		
		case 5:
			ConnectivityRelation_WarshallAlgorithm();
			printf("����Ϸ��� �ƹ� Ű�� �����ʽÿ� . . .");
			getch();			
			break;
		
		default:
			break;
		}
		
		if(menu == 6) {
			printf("���α׷��� �����մϴ�. \n");
			break;
		}
		
	}
	return 0;
}


//-------------------------------------------------------------------------------------------------------------------------------------------
//0. Quiz
void Quiz()
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
	
	return;
}

//-------------------------------------------------------------------------------------------------------------------------------------------
//1. Propositional Logic
char Conjunction(char p, char q);
char Disjunction(char p, char q);
char Negation(char p);
char Exclusive_or(char p, char q);
char Implication(char p, char q);
char Equivalent(char p, char q);
void Print_Stack(char *stack_oper, char *stack_prop, int *top_oper, int *top_prop);
void Push(char push, char *stack, int *top);
char Pop(char *stack, int *top);
char Calculation(char oper, char *stack_oper, char *stack_prop, int *top_oper, int *top_prop, char p, char q, char r);

void PropositionalLogic()
{
	//�ռ����� P^Q>~PvQ^R 
	char comp[30];
	char p, q, r;
	int i;
	int row, col, find_row, find_col;
	char oper, val, result;
	
	//���� ���� 
	char stack_oper[30] = {};
	char stack_prop[30] = {};
	int top_oper, top_prop;
	
	top_oper = top_prop = 0;
	
	//�������� �켱����ǥ
	char priority[7][7] = {{' ', '~', '^', '>', 'v', 'x', '='},
						   {'~', '<', '>', '>', '>', '>', '>'}, 
						   {'^', '<', '>', '>', '>', '>', '>'}, 
						   {'>', '<', '<', '>', '<', '<', '>'}, 
						   {'v', '<', '<', '>', '>', '>', '>'},
						   {'x', '<', '<', '>', '>', '>', '>'},
						   {'=', '<', '<', '>', '<', '<', '>'}};
	
	//���α׷� �Ұ�
	printf("1. Propositional Logic\n");
	printf("���� P, Q, R�� ���� �ռ������� ��� ����� ����մϴ�.\n\n");
	 
	//�ռ����� �Է� 
	printf("Compound ���� : ");
	fgets(comp, sizeof(comp), stdin);
	
	//�Է¹��� �ռ����� ��� 
	printf("�ռ����� : %s \n", comp); 
	
	//�ռ����� ����� ���� ��� 
	printf("len = %d \n", strlen(comp)-1);
	
	//�ռ����� ��� ���� 
	for(i=0; i<strlen(comp)-1; i++)	{
		printf("comp[%i] = %c \n", i, comp[i]);
	}
	
	//���� �Է� 
	printf("Proposition P: ");
	p=getchar();
	getchar();
	if(p == 'T'|| p == 't') {
		p = 'T';
	}
	else if(p == 'F'|| p == 'f') {
		p = 'F';
	}
	else	{
		printf("�߸��� ���� �Է��ϼ̽��ϴ�."); 
		return;
	}
	
	printf("Proposition Q: ");
	q=getchar();
	getchar();
	if(q == 'T'|| q == 't') {
		q = 'T';
	}
	else if(q == 'F'|| q == 'f') {
		q = 'F';
	}
	else {
		printf("�߸��� ���� �Է��ϼ̽��ϴ�.");
		return;
	}
	
	printf("Proposition R: ");
	r=getchar();
	getchar();
	if(r == 'T'|| r == 't') {
		r = 'T';
	}
	else if(r == 'F'|| r == 'f') {
		r = 'F';
	}
	else {
		printf("�߸��� ���� �Է��ϼ̽��ϴ�.");
		return;
	}
	
	printf("P= %c, Q= %c, R= %c \n\n", p, q, r);

	//�Էµ� �ռ����� ����� ���ÿ� push/pop�ϸ� ���
	for(i=0; i<strlen(comp)-1; i++)	{
		//������ ����, ���� ���� ���
		Print_Stack(stack_oper, stack_prop, &top_oper, &top_prop);
		
		//�Էµ� ���� ���������� �������� �Ǵ� 
		if(comp[i] == 'P' || comp[i] == 'Q' || comp[i] == 'R') {
			//���� ���ÿ� push
			Push(comp[i], stack_prop, &top_prop);
		}
		else {
			if(comp[i] == '~' || comp[i] == '^' || comp[i] == '>' || comp[i] == 'v' || comp[i] == 'x' || comp[i] == '=') {
				//������ ���ÿ� �۾� 
				//������ ������ ��������� push
				if(top_oper == 0) {
					//������ ���ÿ� push 
					Push(comp[i], stack_oper, &top_oper);
				}
				else {
					//������ ������ ������� ���� 
					//������ �켱���� ��
					for(row = 1; row < 7; row++) {
						if(comp[i] == priority[0][row]) {
							find_row = row;
						}
					}
					for(col = 1; col < 7; col++) {
						if(stack_oper[top_oper-1] == priority[col][0]) {
							find_col = col;	
						}
					}
					if(priority[find_col][find_row] == '>') {
						//������ ���ÿ� �ִ� �����ڰ� �켱������ ����
						//1. ������ ���ÿ��� pop
						oper = Pop(stack_oper, &top_oper);
						//2. pop�� �����ڷ� ���� stack���� ������ pop�� �� ���
						val = Calculation(oper, stack_oper, stack_prop, &top_oper, &top_prop, p, q, r);
						//3. ��� ����� ���� ���ÿ� push 
						Push(val, stack_prop, &top_prop);
						Print_Stack(stack_oper, stack_prop, &top_oper, &top_prop);
						//4. �Է� ������ push
						Push(comp[i], stack_oper, &top_oper);
					}
					else {
						//�Է� �����ڰ� �켱������ ���� 
						//������ ���ÿ� push
						Push(comp[i], stack_oper, &top_oper);
					}
				}
			}	
		}
	}	//end for ->�Է��� �� ó���ߴ� 

	//������ ������ underflow�� �� ���� pop
	//������ ���ÿ� ���� ���� stack�� pop 
	while(1) 
	{
		//������ ����, ���� ���� ���
		Print_Stack(stack_oper, stack_prop, &top_oper, &top_prop);
		//1. ������ ���ÿ��� pop
		oper = Pop(stack_oper, &top_oper);
		//2. pop�� �����ڷ� ���� stack���� ������ pop�� �� ���
		val = Calculation(oper, stack_oper, stack_prop, &top_oper, &top_prop, p, q, r);
		//3. top_oper�� 0�̶�� underflow�� �Ͼ�Ƿ� �ݺ��� ����
		if(top_oper == 0) {
			result = val;
			break;
		}
		//4. top_oper�� 0�� �ƴ϶�� ��� ����� ���� ���ÿ� push
		else {
			Push(val, stack_prop, &top_prop);
		}
	}
	
	//result�� ���� ǥ��
	printf("result = %c\n\n", result); 
	
	//���� stack�Ǵ� ������ stack�� top�� 0�� �ƴ϶�� �����̹Ƿ� ���α׷� ���� 
	if(top_prop != 0 || top_oper !=0) {
		printf("������ �߻��Ͽ����ϴ�.\n");
		return;
	}
	
	//������� ��� 
	printf("���:"); 
	for(i=0; i<strlen(comp)-1; i++)	{
		printf("%c ", comp[i]);
	}
	printf("= %c\n\n", result);
	
	return;
}

// p^q ����
char Conjunction(char p, char q)
{
	if(p == 'T' && q== 'T')	return 'T';
	else					return 'F';
}
	
// p v q ����
char Disjunction(char p, char q)
{
	if(p == 'F' && q == 'F') return 'F';
	else 					 return 'T';
}

// ~p ����
char Negation(char p)
{
	if(p == 'T') return 'F';
	else		 return 'T';	
}

// p -> q ����
char Implication(char p, char q)
{
	if(p == 'T' && q=='F') return 'F';
	else				   return 'T';
}

// p xor q ����
char Exclusive_or(char p, char q)
{
	if(p == q)	return 'F';
	else		return 'T';
}

// p <=> q ����
char Equivalent(char p, char q)
{
	if(p == q)	return 'T';
	else		return 'F';
}

//������ ���ð� ���� ������ ����ϴ� �Լ�
void Print_Stack(char *stack_oper, char *stack_prop, int *top_oper, int *top_prop)
{
	int j;
	//������ ���� ��� 
	printf("������ ����: "); 
	for(j=0; j<*top_oper; j++) {
		printf("%c ",stack_oper[j]);
	}
	printf("\n");
	//���� ���� ��� 
	printf("���� ����: "); 
	for(j=0; j<*top_prop; j++) {
		printf("%c ",stack_prop[j]);
	}
	printf("\n\n");
}

//push �Լ�
void Push(char push, char *stack, int *top)
{
	//�Էµ� stack�� �迭�� top��ġ�� push���� push 
	stack[*top] = push; 
	printf("push: %c\n\n",push);
	//top�� 1 ���� 
	(*top)++;
}

//pop �Լ�, pop�� ���� return�Ѵ� 
char Pop(char *stack, int *top)
{
	char pop;
	//�Էµ� stack�� �迭�� top��ġ�� �����͸� pop
	(*top)--;
	pop = stack[*top];
	printf("pop: %c\n\n", pop);
	//pop�� ���� retrun
	return pop;
}

//oper�� �˸´� ������ ������ pop�� �� �����Ͽ� ����� ��ȯ 
char Calculation(char oper, char *stack_oper, char *stack_prop, int *top_oper, int *top_prop, char p, char q, char r)
{
	char p1, p2, val;
	//������ ���ð� ���� ���� ��� 
	Print_Stack(stack_oper, stack_prop, &(*top_oper), &(*top_prop));
	
	//oper�� �˸��� ������ ������ pop 
	if(oper == '~') {
		//���׿�����
		//1. ���� stack���� pop 1��
		p1 = Pop(stack_prop, &(*top_prop));
		Print_Stack(stack_oper, stack_prop, &(*top_oper), &(*top_prop));
		if(p1 == 'P') p1=p;
		if(p1 == 'Q') p1=q;
		if(p1 == 'R') p1=r;		
		//2. �� ����
		val = Negation(p1);
	}
	else {
		//���׿�����
		//1. ���� stack���� pop 2��
		p1 = Pop(stack_prop, &(*top_prop));
		Print_Stack(stack_oper, stack_prop, &(*top_oper), &(*top_prop));
		if(p1 == 'P') p1=p;
		if(p1 == 'Q') p1=q;
		if(p1 == 'R') p1=r;	
		p2 = Pop(stack_prop, &(*top_prop));
		Print_Stack(stack_oper, stack_prop, &(*top_oper), &(*top_prop));
		if(p2 == 'P') p2=p;
		if(p2 == 'Q') p2=q;
		if(p2 == 'R') p2=r;	
		//2. �� ����
		if(oper == '^')	val = Conjunction(p2, p1);
		if(oper == 'v') val = Disjunction(p2, p1);
		if(oper == '>')	val = Implication(p2, p1);
		if(oper == 'x') val = Exclusive_or(p2, p1);
		if(oper == '=') val = Equivalent(p2, p1);
	}
	//������ ����� ��ȯ
	return val;
}


//-------------------------------------------------------------------------------------------------------------------------------------------
//2. Power Set
void PowerSet()
{
	int element;
	int i, j, k, l;
	int numpwr = 1;
	
	//���α׷� �Ұ�
	printf("2. Power Set\n");
	printf("�Է��� �� ��ŭ�� ���Ҹ� ���� ������ Power Set�� ����մϴ�.\n\n");
	
	printf("number of element: "); 
	scanf("%i", &element);
	
	printf("A= { ");
	for(i=1; i<=element; i++){
		numpwr *= 2;
		if(i==element)
			printf("%i", i);
		else
			printf("%i, ", i);
	}
	printf(" } \n");
	
	//power set ���� ���
	printf("element %i, number of powerset = %d \n\n\n", element, numpwr); 
	
	printf("P(A) = { @, ");
	for(i=1; i<=element; i++){
		printf("{%i}, ", i);
	}
	
	for(i=1; i<=element; i++){
		for(j=i+1; j<=element; j++){
			printf("{%i, %i}, ", i, j);
		}
	}
	
	for(i=1; i<=element; i++){
		for(j=i+1; j<=element; j++){
			for(k=j+1; k<=element; k++){
				printf("{%i, %i, %i}, ", i, j, k);
			}
		}
	}
	
	for(i=1; i<=element; i++){
		for(j=i+1; j<=element; j++){
			for(k=j+1; k<=element; k++){
				for(l=k+1; l<=element; l++){
					if(i==element-3)
						printf("{%i, %i, %i, %i}", i, j, k, l);
					else
						printf("{%i, %i, %i, %i}, ", i, j, k, l);
				}
			}
		}
	}
	printf("} \n\n");
	
	return;		
}


//-------------------------------------------------------------------------------------------------------------------------------------------
//3. Equivalence Relation
void EquivalenceRelation()
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
	
	//���α׷� �Ұ�
	printf("3. Equivalence Relation\n");
	printf("�־��� Relation�� Equivalence Relation���� Ȯ���մϴ�.\n\n");
	
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
		
	printf("\n\n");
	
	return;
}


//-------------------------------------------------------------------------------------------------------------------------------------------
//4. Composite Relation
void booleanProduct(int relMatA[5][5], int relMatB[5][5], int resultMat[5][5]);
void printRelation(int Matrix[5][5]);

void CompositeRelation()
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
	
	//���α׷� �Ұ�
	printf("4. Composite Relation\n");
	printf("�־��� ���� ��Ŀ� ���� �ռ��� ����մϴ�.\n\n");
	
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
	
	printf("\n\n");
	return;
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


//-------------------------------------------------------------------------------------------------------------------------------------------
//5. Connectivity Relation (Warshall Algo.)
void ConnectivityRelation_WarshallAlgorithm()
{
	int m, n, i;
	int cntRelation=0;
	int W[5][4][4];
	
	int A[4] = {1, 2, 3, 4};
	int relMatR[4][4] = {{0, 1, 0, 0},
						 {1, 0, 1, 0},
						 {0, 0, 0, 1},
						 {0, 0, 0, 0}};
	//���α׷� �Ұ�
	printf("5. Connectivity Relation (Warshall Algo.)\n");
	printf("�ͼ� �˰����� �̿��Ͽ� ���� ���踦 ����մϴ�.\n\n");
	
	//A ��� 
	printf("A = {");
	for(m=0; m<4; m++) {
		printf("%d", A[m]);
		if(m!=3) {
			printf(", ");
		}
	}
	printf("} \n\n");
	
	//R ���� �� ��� 
	printf("R = {");
	for(m=0; m<4; m++) {
		for(n=0; n<4; n++) {
			if(relMatR[m][n] == 1) {
				if(cntRelation==0) 
					printf("(%d, %d)", m+1, n+1);
				else 
					printf(", (%d, %d)", m+1, n+1);
				cntRelation++;
			}
		}
	}
	printf("} \n\n");
	
	
	//w0 ���� 
	for(m=0; m<4; m++) {
		for(n=0; n<4; n++)
			W[0][m][n]=relMatR[m][n];
	}
	
	//w0 ��� 
	printf("W0 = \n");
	for(m=0; m<4; m++) {
		printf("(");
		for(n=0; n<4; n++)
			printf(" %d ", W[0][m][n]);
		printf(") \n");
	}
	printf("\n");
	
	//w1 ~ w4
	for(i=1; i<5; i++) {
		//wk ���� 
		for(m=0; m<4; m++) {
			for(n=0; n<4; n++) {
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
		for(m=0; m<4; m++) {
			printf("(");
			for(n=0; n<4; n++)
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
	
	return;
}
