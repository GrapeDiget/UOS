// ���� 1-6 �Ҽ��� �Ǻ� 
// ����������ǻ�Ͱ��к� 2017440018 ���ȣ
// 0331-2.c

#include <stdio.h>

int main()
{
	int i;
	int input;
	
	printf("�Է�(input)�� ���� �Ҽ� �Ǻ��� �ص帳�ϴ�.\n");
	printf("�Ҽ� �Ǻ��ϱ� ���� N���� �Է��� �ּ���: ");
	scanf("%d", &input);
	printf("\n");
	
	for(i=2; i<input; i++)
	{
		if(input % i ==0 && input != i)
		{
			printf("�Է��� N --> %5d ��(��) �Ҽ��� �ƴմϴ�!!\n", input);
			return 0;
		}
	}
		
	if(input>1)
		printf("�Է��� N --> %5d ��(��) �Ҽ��� �½��ϴ�!!\n", input);
	else
		printf("�Է��� N --> %5d ��(��) �Ҽ��� �ƴմϴ�!!\n", input);
	
	return 0;
}
