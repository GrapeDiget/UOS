//�迭�� �̿��� QUEUE 

#include <stdio.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE 100

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

int main()
{
	init_queue();
	
	enqueue(1); print_queue("enqueue 1ȸ��"); printf("front = %d, rear = %d \n", front, rear);
	enqueue(3); print_queue("enqueue 2ȸ��"); printf("front = %d, rear = %d \n", front, rear);
	enqueue(7); print_queue("enqueue 3ȸ��"); printf("front = %d, rear = %d \n", front, rear);
	enqueue(5); print_queue("enqueue 4ȸ��"); printf("front = %d, rear = %d \n", front, rear);
	enqueue(3); print_queue("enqueue 5ȸ��"); printf("front = %d, rear = %d \n", front, rear);
	enqueue(9); print_queue("enqueue 6ȸ��"); printf("front = %d, rear = %d \n", front, rear);
	enqueue(0); print_queue("enqueue 7ȸ��"); printf("front = %d, rear = %d \n", front, rear);
	printf("\n"); 
	
	printf("dequeue() --> %d \n", dequeue());
	print_queue("dequeue 1ȸ��"); printf("front = %d, rear = %d \n", front, rear);
	printf("dequeue() --> %d \n", dequeue());
	print_queue("dequeue 2ȸ��"); printf("front = %d, rear = %d \n", front, rear);
	printf("dequeue() --> %d \n", dequeue());
	print_queue("dequeue 3ȸ��"); printf("front = %d, rear = %d \n", front, rear);
	printf("\n");
	
	print_queue("����ť dequeue 3ȸ");
	
	return 0;
}
