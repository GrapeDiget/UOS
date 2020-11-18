//DEQUE�� �̿���  ȸ�� �˻� 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_QUEUE_SIZE 100

//QUEUE�� ���� 
typedef int Element;

Element data[MAX_QUEUE_SIZE];
int front;
int rear;

void error(char str[])
{
	printf("%s \n", str);
	exit(1);
}

void init_queue()	{front = rear = 0;}
int is_empty()		{return front == rear;}
int is_full()		{return front == (rear + 1) % MAX_QUEUE_SIZE;}
int size()			{return (rear - front + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;}

void enqueue(Element val)
{
	if(is_full())
		error("ť ��ȭ ����");
	rear = (rear + 1) % MAX_QUEUE_SIZE;
	data[rear] = val;
}

Element dequeue()
{
	if(is_empty())
		error("ť ���� ����");
	front = (front + 1) % MAX_QUEUE_SIZE;
	return data[front];
}

Element peek()
{
	if(is_empty())
		error("ť ���� ����");
	return data[(front + 1) % MAX_QUEUE_SIZE];
}

void print_queue(char msg[]) {
	int i, maxi = rear;
	if(front >= rear) maxi += MAX_QUEUE_SIZE;
	printf("%s[%2d]= ", msg, size());
	for(i = front + 1; i <= maxi; i++)
		printf("%2d ", data[i%MAX_QUEUE_SIZE]);
	printf("\n");
}

//QUEUE �Լ��� �̿��� DEQUE�� ���� 
void init_deque() {init_queue();}
void add_rear(Element val) {enqueue(val);}
Element delete_front() {return dequeue();}
Element get_front() {return peek();}
void print_deque(char msg[]) {print_queue(msg);}

void add_front(Element val)
{
	if(is_full())
		error("�� ��ȭ ����");
	data[front] = val;
	front = (front - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
}

Element delete_rear()
{
	Element ret;
	if(is_empty())
		error("�� ���� ����");
	ret = data[rear];
	rear = (rear - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
	return ret;
}

Element get_rear()
{
	if(is_empty())
		error("�� ���� ����");
	return data[rear];
}

//ȸ�� �˻� 
int main()
{
	int i, v1, v2;
	char str[10] = "abcdecba";
	
	for(i=0; i<strlen(str); i++)
		add_rear(str[i]);
	
	while(1) {
		if(is_empty()) break;
		v1 = delete_front();
		if(is_empty()) break;
		v2 = delete_rear();
		
		if(v1 != v2) {
			printf("This is not a palindrome. \n");
			return 0;
		}
	}
	
	printf("This is a palindrome. \n");
	
	return 0;
}
