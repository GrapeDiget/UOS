#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char name[80];
	char phone[80];
} Friend;

int main()
{
	int n, k;
	Friend *a;
	
	printf("�ּ��� ����: ");
	scanf("%d", &n);
	
	a = (Friend*) malloc(sizeof(Friend)*n);
	
	for(k=0; k<n; k++) {
		printf("�̸��� �Է��Ͻÿ�: ");
		scanf("%s", a[k].name);
		printf("�޴��� ��ȣ�� �Է��Ͻÿ�: ");
		scanf("%s", a[k].phone);
	}
	printf("===========================================\n");
	printf("�̸�\t\t�޴��� ��ȣ\n"); 
	printf("===========================================\n");
	for(k=0; k<n; k++)
		printf("%s\t\t%s \n", a[k].name, a[k].phone);
	
	printf("===========================================\n");
	
	return 0;
}
