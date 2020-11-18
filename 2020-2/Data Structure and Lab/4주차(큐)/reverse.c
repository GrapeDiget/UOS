//입력된 문자열을 역순으로 출력하는 프로그램 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

void reverse(char str[]) {
	int i;
	int n;
	n = strlen(str);
	
	for(i=0; i < n; i++)
		push(str[i]);
	for(i=0; i < n; i++)
		str[i] = pop();
}

int main()
{
	char str[] = "Korea";
	reverse(str);
	printf("역순 문자열: %s", str);
	
	return 0;
}
