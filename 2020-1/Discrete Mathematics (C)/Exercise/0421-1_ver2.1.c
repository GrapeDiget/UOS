// �ռ����� ��� 
// ����������ǻ�Ͱ��к� 2017440018 ���ȣ
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
		printf("�߸��� ���� �Է��ϼ̽��ϴ�.");
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
		printf("�߸��� ���� �Է��ϼ̽��ϴ�.");
		return 0;
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
		return 0;
	}
	
	//������� ��� 
	printf("���:"); 
	for(i=0; i<strlen(comp)-1; i++)	{
		printf("%c ", comp[i]);
	}
	printf("= %c", result);
	
	return 0;
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
