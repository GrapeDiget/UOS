#include <stdio.h>
#include <stdlib.h>

typedef int Element;
typedef struct LinkedNode {
	Element data;
	struct LinedNode *link;
} Node;
Node *front = NULL;
Node *rear = NULL;

void error(char *str)
{
	printf("%s\n", str);
	exit(1);
}

int is_empty()	{return front == NULL;}
void init_queue() { front = NULL;}

int size() {
	Node *p;
	int count = 0;
	for(p = front; p != NULL; p = p->link)
		count++;
	return count;
}

void enqueue(Element e) {
	Node *p = (Node*)malloc(sizeof(Node));
	p->data = e;
	p->link = NULL;
	
	if(is_empty()) front = rear = p;
	else {
		rear->link = p;
		rear = p;
	}
}

Element dequeue() {
	Node *p;
	Element e;
	if(is_empty())
		error("스택 공백 에러");
	
	p = front;
	front = front->link;
	if(front == NULL)
		rear = NULL;
	e = p->data;
	free(p);
	return e;
}

Element peek() {
	if(is_empty())
		error("스택 공백 에러");
	return front->data;
}

void destroy_stack() {
	while(is_empty() == 0)
		dequeue();
}

void print_queue(char *msg) {
	Node *p;
	printf("%s[%2d]= ", msg, size());
	for (p = front; p != NULL; p = p->link)
		printf("%2d ", p->data);
	printf("\n");
}

int main()
{
	int i, val;
	init_queue();
	
	while(1) {
		printf("양의 정수를 입력하세요(종료: -1): ");
		scanf("%d", &val);
		if(val < 0) 
			break;
		enqueue(val); 
	}
	
	while(is_empty() == 0)
		printf("%d -> ", dequeue());
	
	printf("NULL \n");	
	
	return 0;
}
