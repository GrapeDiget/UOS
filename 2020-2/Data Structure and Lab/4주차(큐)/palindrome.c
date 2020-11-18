//회문인지 아닌지 검사하는 프로그램 

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

int main() {
	char str[1000];
	int i, count = 0, len;
	
	printf("입력문자열= ");
	scanf("%s", str);
	
	len = strlen(str);
	for (i=0; i < len; i++)
		push(str[i]);
	for (i=0; i < len; i++) {
		if(str[i] == pop())
			count++;
		}
	
	if(count == len)
		printf("회문\n");
	else
		printf("회문 아님\n");
	
	return 0;
}
