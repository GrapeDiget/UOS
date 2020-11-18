// 2020년 1학기 이산수학 소스 정리 
// 전자전기컴퓨터공학부 2017440018 김민호
// 0609-2.c

#include<stdio.h>
#include<string.h>

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
			printf("===2020년 1학기 이산수학 소스===\n");
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
		} while(!(1 <= menu && menu <= 7));
		printf("================================\n");
			
		switch(menu) {
		case 1:
			PropositionalLogic();
			printf("계속하려면 아무 키나 누르십시오 . . .");
			getch();
			break;
		
		case 2:
			PowerSet();
			printf("계속하려면 아무 키나 누르십시오 . . .");
			getch();
			break;
					
		case 3:
			EquivalenceRelation();
			printf("계속하려면 아무 키나 누르십시오 . . .");
			getch();
			break;
		
		case 4:
			CompositeRelation();
			printf("계속하려면 아무 키나 누르십시오 . . .");
			getch();
			break;
		
		case 5:
			ConnectivityRelation_WarshallAlgorithm();
			printf("계속하려면 아무 키나 누르십시오 . . .");
			getch();			
			break;
		
		default:
			break;
		}
		
		if(menu == 6) {
			printf("프로그램을 종료합니다. \n");
			break;
		}
		
	}
	return 0;
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
	//합성명제 P^Q>~PvQ^R 
	char comp[30];
	char p, q, r;
	int i;
	int row, col, find_row, find_col;
	char oper, val, result;
	
	//스택 정의 
	char stack_oper[30] = {};
	char stack_prop[30] = {};
	int top_oper, top_prop;
	
	top_oper = top_prop = 0;
	
	//논리연산자 우선순위표
	char priority[7][7] = {{' ', '~', '^', '>', 'v', 'x', '='},
						   {'~', '<', '>', '>', '>', '>', '>'}, 
						   {'^', '<', '>', '>', '>', '>', '>'}, 
						   {'>', '<', '<', '>', '<', '<', '>'}, 
						   {'v', '<', '<', '>', '>', '>', '>'},
						   {'x', '<', '<', '>', '>', '>', '>'},
						   {'=', '<', '<', '>', '<', '<', '>'}};
	
	//프로그램 소개
	printf("1. Propositional Logic\n");
	printf("명제 P, Q, R에 대한 합성명제의 계산 결과를 출력합니다.\n\n");
	 
	//합성명제 입력 
	printf("Compound 명제 : ");
	fgets(comp, sizeof(comp), stdin);
	
	//입력받은 합성명제 출력 
	printf("합성명제 : %s \n", comp); 
	
	//합성명제 행렬의 길이 출력 
	printf("len = %d \n", strlen(comp)-1);
	
	//합성명제 행렬 분해 
	for(i=0; i<strlen(comp)-1; i++)	{
		printf("comp[%i] = %c \n", i, comp[i]);
	}
	
	//명제 입력 
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
		printf("잘못된 값을 입력하셨습니다."); 
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
		printf("잘못된 값을 입력하셨습니다.");
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
		printf("잘못된 값을 입력하셨습니다.");
		return;
	}
	
	printf("P= %c, Q= %c, R= %c \n\n", p, q, r);

	//입력된 합성명제 행렬을 스택에 push/pop하며 계산
	for(i=0; i<strlen(comp)-1; i++)	{
		//연산자 스택, 명제 스택 출력
		Print_Stack(stack_oper, stack_prop, &top_oper, &top_prop);
		
		//입력된 값이 연산자인지 명제인지 판단 
		if(comp[i] == 'P' || comp[i] == 'Q' || comp[i] == 'R') {
			//명제 스택에 push
			Push(comp[i], stack_prop, &top_prop);
		}
		else {
			if(comp[i] == '~' || comp[i] == '^' || comp[i] == '>' || comp[i] == 'v' || comp[i] == 'x' || comp[i] == '=') {
				//연산자 스택에 작업 
				//연산자 스택이 비어있으면 push
				if(top_oper == 0) {
					//연산자 스택에 push 
					Push(comp[i], stack_oper, &top_oper);
				}
				else {
					//연산자 스택이 비어있지 않음 
					//연산자 우선순위 비교
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
						//연산자 스택에 있는 연산자가 우선순위가 높다
						//1. 연산자 스택에서 pop
						oper = Pop(stack_oper, &top_oper);
						//2. pop한 연산자로 명제 stack에서 적절히 pop한 후 계산
						val = Calculation(oper, stack_oper, stack_prop, &top_oper, &top_prop, p, q, r);
						//3. 계산 결과를 명제 스택에 push 
						Push(val, stack_prop, &top_prop);
						Print_Stack(stack_oper, stack_prop, &top_oper, &top_prop);
						//4. 입력 연산자 push
						Push(comp[i], stack_oper, &top_oper);
					}
					else {
						//입력 연산자가 우선순위가 높다 
						//연산자 스택에 push
						Push(comp[i], stack_oper, &top_oper);
					}
				}
			}	
		}
	}	//end for ->입력을 다 처리했다 

	//연산자 스택이 underflow될 때 까지 pop
	//연산자 스택에 따라 명제 stack을 pop 
	while(1) 
	{
		//연산자 스택, 명제 스택 출력
		Print_Stack(stack_oper, stack_prop, &top_oper, &top_prop);
		//1. 연산자 스택에서 pop
		oper = Pop(stack_oper, &top_oper);
		//2. pop한 연산자로 명제 stack에서 적절히 pop한 후 계산
		val = Calculation(oper, stack_oper, stack_prop, &top_oper, &top_prop, p, q, r);
		//3. top_oper가 0이라면 underflow가 일어나므로 반복을 종료
		if(top_oper == 0) {
			result = val;
			break;
		}
		//4. top_oper가 0이 아니라면 계산 결과를 명제 스택에 push
		else {
			Push(val, stack_prop, &top_prop);
		}
	}
	
	//result의 값을 표시
	printf("result = %c\n\n", result); 
	
	//명제 stack또는 연산자 stack의 top가 0이 아니라면 오류이므로 프로그램 종료 
	if(top_prop != 0 || top_oper !=0) {
		printf("오류가 발생하였습니다.\n");
		return;
	}
	
	//결과값을 출력 
	printf("결론:"); 
	for(i=0; i<strlen(comp)-1; i++)	{
		printf("%c ", comp[i]);
	}
	printf("= %c\n\n", result);
	
	return;
}

// p^q 연산
char Conjunction(char p, char q)
{
	if(p == 'T' && q== 'T')	return 'T';
	else					return 'F';
}
	
// p v q 연산
char Disjunction(char p, char q)
{
	if(p == 'F' && q == 'F') return 'F';
	else 					 return 'T';
}

// ~p 연산
char Negation(char p)
{
	if(p == 'T') return 'F';
	else		 return 'T';	
}

// p -> q 연산
char Implication(char p, char q)
{
	if(p == 'T' && q=='F') return 'F';
	else				   return 'T';
}

// p xor q 연산
char Exclusive_or(char p, char q)
{
	if(p == q)	return 'F';
	else		return 'T';
}

// p <=> q 연산
char Equivalent(char p, char q)
{
	if(p == q)	return 'T';
	else		return 'F';
}

//연산자 스택과 명제 스택을 출력하는 함수
void Print_Stack(char *stack_oper, char *stack_prop, int *top_oper, int *top_prop)
{
	int j;
	//연산자 스택 출력 
	printf("연산자 스택: "); 
	for(j=0; j<*top_oper; j++) {
		printf("%c ",stack_oper[j]);
	}
	printf("\n");
	//명제 스택 출력 
	printf("명제 스택: "); 
	for(j=0; j<*top_prop; j++) {
		printf("%c ",stack_prop[j]);
	}
	printf("\n\n");
}

//push 함수
void Push(char push, char *stack, int *top)
{
	//입력된 stack의 배열의 top위치에 push값을 push 
	stack[*top] = push; 
	printf("push: %c\n\n",push);
	//top를 1 증가 
	(*top)++;
}

//pop 함수, pop한 값을 return한다 
char Pop(char *stack, int *top)
{
	char pop;
	//입력된 stack의 배열의 top위치의 데이터를 pop
	(*top)--;
	pop = stack[*top];
	printf("pop: %c\n\n", pop);
	//pop한 값을 retrun
	return pop;
}

//oper에 알맞는 개수의 명제를 pop한 뒤 연산하여 결과를 반환 
char Calculation(char oper, char *stack_oper, char *stack_prop, int *top_oper, int *top_prop, char p, char q, char r)
{
	char p1, p2, val;
	//연산자 스택과 명제 스택 출력 
	Print_Stack(stack_oper, stack_prop, &(*top_oper), &(*top_prop));
	
	//oper에 알맞은 개수의 명제를 pop 
	if(oper == '~') {
		//단항연산자
		//1. 명제 stack에서 pop 1개
		p1 = Pop(stack_prop, &(*top_prop));
		Print_Stack(stack_oper, stack_prop, &(*top_oper), &(*top_prop));
		if(p1 == 'P') p1=p;
		if(p1 == 'Q') p1=q;
		if(p1 == 'R') p1=r;		
		//2. 논리 연산
		val = Negation(p1);
	}
	else {
		//이항연산자
		//1. 명제 stack에서 pop 2개
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
		//2. 논리 연산
		if(oper == '^')	val = Conjunction(p2, p1);
		if(oper == 'v') val = Disjunction(p2, p1);
		if(oper == '>')	val = Implication(p2, p1);
		if(oper == 'x') val = Exclusive_or(p2, p1);
		if(oper == '=') val = Equivalent(p2, p1);
	}
	//연산한 결과를 반환
	return val;
}


//-------------------------------------------------------------------------------------------------------------------------------------------
//2. Power Set
void PowerSet()
{
	int element;
	int i, j, k, l;
	int numpwr = 1;
	
	//프로그램 소개
	printf("2. Power Set\n");
	printf("입력한 수 만큼의 원소를 가진 집합의 Power Set을 출력합니다.\n\n");
	
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
	
	//power set 개수 계산
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
	
	//프로그램 소개
	printf("3. Equivalence Relation\n");
	printf("주어진 Relation이 Equivalence Relation인지 확인합니다.\n\n");
	
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
	
	//프로그램 소개
	printf("4. Composite Relation\n");
	printf("주어진 관계 행렬에 대한 합성을 계산합니다.\n\n");
	
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
	//프로그램 소개
	printf("5. Connectivity Relation (Warshall Algo.)\n");
	printf("와샬 알고리즘을 이용하여 연결 관계를 출력합니다.\n\n");
	
	//A 출력 
	printf("A = {");
	for(m=0; m<4; m++) {
		printf("%d", A[m]);
		if(m!=3) {
			printf(", ");
		}
	}
	printf("} \n\n");
	
	//R 연산 및 출력 
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
	
	
	//w0 연산 
	for(m=0; m<4; m++) {
		for(n=0; n<4; n++)
			W[0][m][n]=relMatR[m][n];
	}
	
	//w0 출력 
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
		//wk 연산 
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
		
		//wk 출력 
		printf("W%d = \n", i);
		for(m=0; m<4; m++) {
			printf("(");
			for(n=0; n<4; n++)
				printf(" %d ", W[i][m][n]);
			printf(") \n");
		}
		printf("\n");
	}
	
	//Connectivitiy Relation 연산 및 출력 
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
