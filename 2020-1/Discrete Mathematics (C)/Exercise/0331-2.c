// 예제 1-6 소수의 판별 
// 전자전기컴퓨터공학부 2017440018 김민호
// 0331-2.c

#include <stdio.h>

int main()
{
	int i;
	int input;
	
	printf("입력(input)에 대한 소수 판별을 해드립니다.\n");
	printf("소수 판별하기 위한 N값을 입력해 주세요: ");
	scanf("%d", &input);
	printf("\n");
	
	for(i=2; i<input; i++)
	{
		if(input % i ==0 && input != i)
		{
			printf("입력한 N --> %5d 은(는) 소수가 아닙니다!!\n", input);
			return 0;
		}
	}
		
	if(input>1)
		printf("입력한 N --> %5d 은(는) 소수가 맞습니다!!\n", input);
	else
		printf("입력한 N --> %5d 은(는) 소수가 아닙니다!!\n", input);
	
	return 0;
}
