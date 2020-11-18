#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char Element;
typedef struct LinkedNode {
	Element data;
	struct LinedNode *link;
} Node;
Node *top = NULL;

void error(char *str)
{
	printf("%s\n", str);
	exit(1);
}

int is_empty()	{return top == NULL;}
void init_stack() { top = NULL;}

Element peek() {
	if(is_empty())
		error("스택 공백 에러");
	return top->data;
}

int size() {
	Node *p;
	int count = 0;
	for(p = top; p != NULL; p = p->link)
		count++;
	return count;
}

void push(Element e) {
	Node *p = (Node*)malloc(sizeof(Node));
	p->data = e;
	p->link = top;
	top = p;
}

Element pop() {
	Node *p;
	Element e;
	if(is_empty())
		error("스택 공백 에러");
	
	p = top;
	top = p->link;
	e = p->data;
	free(p);
	return e;
}

void destroy_stack() {
	while(is_empty() == 0)
		pop();
}

void print_stack(char *msg) {
	Node *p;
	printf("%s[%2d]= ", msg, size());
	for (p = top; p != NULL; p = p->link)
		printf("%2d ", p->data);
	printf("\n");
}

int main()
{
	int i;
	char str[10] = "hello";
	
	for(i = 0; i < strlen(str); i++)
		push(str[i]);
	
	for(i = 0; i < strlen(str); i++) {
		if (str[i] != pop()) {
			printf("회문이 아닙니다. \n");
			return 0;
		}
	}
	
	printf("회문입니다. \n");
	
	return 0;
}
