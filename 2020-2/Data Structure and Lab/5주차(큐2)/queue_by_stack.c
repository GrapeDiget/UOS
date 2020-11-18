//2개의 stack을 이용한 queue 구현 

#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100

typedef int Element;
typedef struct ArrayStack {
	Element data[MAX_STACK_SIZE];
	int top;
} Stack;

Stack Stack1, Stack2;

void error(char str[])
{
	printf("%s \n", str);
	exit(1);
}

void init_stack(Stack *s)	{s->top = -1;}
int is_empty(Stack *s)		{return s->top == -1;}
int is_full(Stack *s)		{return s->top == MAX_STACK_SIZE-1;}
int size(Stack *s)			{return s->top+1;}

void push(Stack *s, Element e)
{
	if(is_full(s))
		error("스택 포화 에러");
	s->data[++(s->top)] = e;
}

Element pop(Stack *s)
{
	if(is_empty(s))
		error("스택 공백 에러");
	return s->data[(s->top)--];
}

Element peek(Stack *s)
{
	if(is_empty(s))
		error("스택 공백 에러");
	return s->data[s->top];
}

void print_stack(Stack *s) {
	int i;
	printf("현재 스택 크기:%2d = [", size(s));
	for(i=0; i<size(s); i++)
		printf("%2d ", s->data[i]);
	printf("]\n");
}

void enqueue(Element val)
{
	push(&Stack1, val);
}

Element dequeue()
{
	if(is_empty(&Stack2)) {
		while (!is_empty(&Stack1))
			push(&Stack2, pop(&Stack1));
	}
	return pop(&Stack2);
}

int main()
{
	int i;
	init_stack(&Stack1);
	init_stack(&Stack2);
	
	enqueue(1);
	enqueue(2);
	enqueue(3);
	printf("\tdequeue() --> %d \n", dequeue());
	printf("\tdequeue() --> %d \n", dequeue());
	enqueue(4);
	enqueue(5);
	printf("\tdequeue() --> %d \n", dequeue());
	printf("\tdequeue() --> %d \n", dequeue());
	printf("\tdequeue() --> %d \n", dequeue());
	
	return 0;
}

