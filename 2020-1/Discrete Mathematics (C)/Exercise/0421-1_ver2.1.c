// 합성명제 계산 
// 전자전기컴퓨터공학부 2017440018 김민호
// 0421-1.c

#include<stdio.h>
#include<string.h>
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

int main()
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
		return 0;
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
		return 0;
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
		return 0;
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
		return 0;
	}
	
	//결과값을 출력 
	printf("결론:"); 
	for(i=0; i<strlen(comp)-1; i++)	{
		printf("%c ", comp[i]);
	}
	printf("= %c", result);
	
	return 0;
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
