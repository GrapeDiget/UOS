#include <stdio.h>

void my_opening();
int my_card1(int (*)[4]);
int my_card2(int (*)[4]);
int my_card3(int (*)[4]);
int my_card4(int (*)[4]);
int my_card5(int (*)[4]);

void my_res(int, int, int, int, int);

int main()
{
	int card1[4][4] = {1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31};
	int card2[4][4] = {2,3,6,7,10,11,14,15,18,19,22,23,26,27,30,31};
	int card3[4][4] = {4,5,6,7,12,13,14,15,20,21,22,23,28,29,30,31};
	int card4[4][4] = {8,9,10,11,12,13,14,15,24,25,26,27,28,29,30,31};
	int card5[4][4] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
	
	int (*ca1)[4];
	int (*ca2)[4];
	int (*ca3)[4];
	int (*ca4)[4];
	int (*ca5)[4];
	
	int a, b, c, d, e;
	char k;
	
	my_opening;
	
	printf("�����ϼ̾��? �����Ϸ��� ���͸� �����ÿ�.");
	scanf("&c", &k);
	printf("\n\n");
	
	ca1 = card1;
	a = my_card1(card1);
	ca2 = card2;
	b = my_card2(card2);
	ca3 = card3;
	c = my_card3(card3);
	ca4 = card4;
	d = my_card4(card4);
	ca5 = card5;
	e = my_card5(card5);
	
	my_res(a, b, c, d, e);
	return 0;				
}

void my_opening()
{
	printf("# ���ݺ��� �������� �ź��� ������ ����� �ʴ��մϴ�.\n\n\n");
	printf("1 - 31�� ������ ������ ��� ���ڸ� ������ ������. \n\n\n");
}

int my_card1(int (*ca1)[4])
{
	int i, j, a;
	
	while(1)
	{
		printf("----------- A ī�� -----------\n");
		for(i=0; i<4; i++)
		{
			for(j=0; j<4; j++)
			{
				printf("%7d", ca1[i][j]);
			}
			printf("\n");
		}
		printf("------------------------------\n");
		printf("\n\n");
		
		printf("A ī�忡 ������ ���ڰ� �ִٸ� Yes(1),\n");
		printf("���ٸ� No(0)�� �Է��Ͽ� �ֽñ� �ٶ��ϴ�.\n");
		scanf("%d",&a);
		printf("\n\n");
		
		if(a==0 || a==1)
		{
			return a;
			break;
		}
		
		printf("�ٽ� �Է��Ͽ� �ֽʽÿ�.\n\n");
	}
}

int my_card2(int (*ca2)[4])
{
	int i, j, b;
	
	while(1)
	{
		printf("----------- B ī�� -----------\n");
		for(i=0; i<4; i++)
		{
			for(j=0; j<4; j++)
			{
				printf("%7d", ca2[i][j]);
			}
			printf("\n");
		}
		printf("------------------------------\n");
		printf("\n\n");
		
		printf("B ī�忡 ������ ���ڰ� �ִٸ� Yes(1),\n");
		printf("���ٸ� No(0)�� �Է��Ͽ� �ֽñ� �ٶ��ϴ�.\n");
		scanf("%d", &b);
		printf("\n\n");
		
		if(b>-1 && b<2)
		{
			return b;
			break;
		}
		
		printf("�ٽ� �Է��Ͽ� �ֽʽÿ�.\n\n");
	}
}

int my_card3(int (*ca3)[4])
{
	int i, j, c;
	
	while(1)
	{
		printf("----------- C ī�� -----------\n");
		for(i=0; i<4; i++)
		{
			for(j=0; j<4; j++)
			{
				printf("%7d", ca3[i][j]);
			}
			printf("\n");
		}
		printf("------------------------------\n");
		printf("\n\n");
		
		printf("C ī�忡 ������ ���ڰ� �ִٸ� Yes(1),\n");
		printf("���ٸ� No(0)�� �Է��Ͽ� �ֽñ� �ٶ��ϴ�.\n");
		scanf("%d", &c);
		printf("\n\n");
		
		if(c>-1 && c<2)
		{
			return c;
			break;
		}
		
		printf("�ٽ� �Է��Ͽ� �ֽʽÿ�.\n\n");
	}
}

int my_card4(int (*ca4)[4])
{
	int i, j, d;
	
	while(1)
	{
		printf("----------- D ī�� -----------\n");
		for(i=0; i<4; i++)
		{
			for(j=0; j<4; j++)
			{
				printf("%7d", ca4[i][j]);
			}
			printf("\n");
		}
		printf("------------------------------\n");
		printf("\n\n");
		
		printf("D ī�忡 ������ ���ڰ� �ִٸ� Yes(1),\n");
		printf("���ٸ� No(0)�� �Է��Ͽ� �ֽñ� �ٶ��ϴ�.\n");
		scanf("%d", &d);
		printf("\n\n");
		
		if(d>-1 && d<2)
		{
			return d;
			break;
		}
		
		printf("�ٽ� �Է��Ͽ� �ֽʽÿ�.\n\n");
	}
}

int my_card5(int (*ca5)[4])
{
	int i, j, e;
	
	while(1)
	{
		printf("----------- E ī�� -----------\n");
		for(i=0; i<4; i++)
		{
			for(j=0; j<4; j++)
			{
				printf("%7d", ca5[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		printf("------------------------------\n");
		printf("\n\n");
		
		printf("E ī�忡 ������ ���ڰ� �ִٸ� Yes(1),\n");
		printf("���ٸ� No(0)�� �Է��Ͽ� �ֽñ� �ٶ��ϴ�.\n");
		scanf("%d", &e);
		printf("\n\n");
		
		if(e>-1 && e<2)
		{
			return e;
			break;
		}
		
		printf("�ٽ� �Է��Ͽ� �ֽʽÿ�.\n\n");
	}
}

void my_res(int a, int b, int c, int d, int e)
{
	int res;
	res = (e*2*2*2*2) + (d*2*2*2) + (c*2*2) + (b*2) + a;
	printf("����� ������ ��� ���ڴ� %d�Դϴ�.\n\n\n", res);
	printf("���? �ű�����!!\n");
	printf("���ݱ��� ������ ���迴���ϴ�.\n\n");
}
