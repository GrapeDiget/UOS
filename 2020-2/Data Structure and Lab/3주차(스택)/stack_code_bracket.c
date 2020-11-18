//stack �ڵ� ��ȣ�˻���� 

#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100

typedef int Element;

Element data[MAX_STACK_SIZE];
int top;

void error(char str[])
{
	printf("%s \n", str);
	exit(1);
}

void init_stack()	{top = -1;}
int is_empty()		{return top == -1;}
int is_full()		{return top == MAX_STACK_SIZE-1;}
int size()			{return top+1;}

void push(Element e)
{
	if(is_full())
		error("���� ��ȭ ����");
	data[++top] = e;
}

Element pop()
{
	if(is_empty())
		error("���� ���� ����");
	return data[top--];
}

Element peek()
{
	if(is_empty)
		error("���� ���� ����");
	return data[top];
}

void print_stack() {
	int i;
	printf("���� ���� ũ��:%2d = [", size());
	for(i=0; i<size(); i++)
		printf("%2d ", data[i]);
	printf("]\n");
}

int check_matching(char expr[]) {
	int i = 0, prev;
	char ch;
	
	init_stack();
	while( expr[i] != '\0' ) {
		ch = expr[i++];
		if(ch == '(' || ch == '{' || ch == '[' || ch == '<')
			push(ch);
		else if(ch == ')' || ch == '}' || ch == ']' || ch == '>') {
			if( is_empty() )
				return 2;
			
			prev = pop();
			if( (prev == '(' && ch != ')') || (prev == '{' && ch != '}') || (prev == '[' && ch != ']') || (prev == '<' && ch != '>') )
				return 3;
		}
	}
	if( is_empty() == 0)
		return 1;
	
	return 0;
}

int main()
{
	char expr[4][80] = {"{A[(i+1)]=0;}",
						"if((i=0) && (j==0)",
						"A<(i+1]>=0;",
						"A[i] =f)(;"};
	char str[50] = "(({{[[<<>>]]}}))";
	int errCode, i;
	
	for(i=0; i<4; i++) {
		errCode = check_matching(expr[i]);
		if(errCode == 0)
			printf("����: %s \n", expr[i]);
		else
			printf("����: %s (���� %d����)\n", expr[i], errCode);
	}
	
	errCode = check_matching(str);
	printf("%s => %d \n", str, errCode);
		
	return 0;
}

