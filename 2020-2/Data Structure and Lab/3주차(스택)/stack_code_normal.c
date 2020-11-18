//stack 코드 기본형 

#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100

typedef char Element;

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
		error("스택 포화 에러");
	data[++top] = e;
}

Element pop()
{
	if(is_empty())
		error("스택 공백 에러");
	return data[top--];
}

Element peek()
{
	if(is_empty)
		error("스택 공백 에러");
	return data[top];
}

void print_stack() {
	int i;
	printf("현재 스택 크기:%2d = [", size());
	for(i=0; i<size(); i++)
		printf("%2c ", data[i]);
	printf("]\n");
}

int main()
{
	init_stack();
	push('a'); push('b'); push('c'); push('c'); push('b'); push('a');
	print_stack();
	printf("\t pop()  --> %c\n", pop());
	printf("\t pop()  --> %c\n", pop());
	printf("\t pop()  --> %c\n", pop());
	printf("\t pop()  --> %c\n", pop());
	print_stack();
	
	return 0;
}

