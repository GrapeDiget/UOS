//stack �ڵ� �ڷ��� ���� 

#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#define MAX_STACK_SIZE 100

typedef struct Student {
	int id;
	char name[32];
	char dept[32];
	char tel[20];
} Student;

typedef Student Element;

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
	printf("���� ���� ũ��:%2d =", size());
	for(i=0; i<size(); i++)
		printf("\n\t\t    %-10d %-10s %-26s %-20s", data[i].id, data[i].name, data[i].dept, data[i].tel);
	printf("\n");
}

Student get_student(int id, char name[], char dept[], char tel[]) {
	Student s;
	s.id = id;
	strcpy(s.name, name);
	strcpy(s.dept, dept);
	strcpy(s.tel, tel);
	
	return s;
}

int main()
{
	Student s;
	init_stack();
	push(get_student(2017440018, "���ȣ", "����������ǻ�Ͱ��к�", "010-2975-1160"));
	push(get_student(2017440001, "�迵��", "����������ǻ�Ͱ��к�", "010-4826-5232"));
	push(get_student(2019412030, "��ö��", "�����а�", "010-1234-5678"));
	push(get_student(2020001099, "ȫ�浿", "ü���а�", "010-7890-6542"));
	
	print_stack();
	s = pop();
	printf("\n\t pop()  --> %-10d %-10s %-26s %-50s", s.id, s.name, s.dept, s.tel);
	s = pop();
	printf("\n\t pop()  --> %-10d %-10s %-26s %-50s", s.id, s.name, s.dept, s.tel);
	s = pop();
	printf("\n\t pop()  --> %-10d %-10s %-26s %-50s", s.id, s.name, s.dept, s.tel);
	
	printf("\n");
	print_stack();
	
	return 0;
}

