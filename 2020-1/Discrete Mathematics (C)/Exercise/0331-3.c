// 예제 1-7 에라토스테네스의 체 
// 전자전기컴퓨터공학부 2017440018 김민호
// 0331-3.c

#include <stdio.h>
 
int main()
{
	int n, i, k;
	
	printf("어떤 수에 대해서 그 수를 초과하지 않는 모든 소수를 찾아내드립니다.\n");
	printf("원하는 수를 입력하세요: ");
	scanf("%d", &n); 
	printf("\n");	
	
	int arr[n+1];		//1부터 n까지의 자연수를 저장하는 배열 선언 
	
	for(i=1; i<n; i++) 	//배열에 1부터 n까지의 자연수 입력 
	{
		arr[i] = i;
	}
	
	arr[1] = 0;			//1은 소수가 아니므로 지움 
	
	for(k=2; k<n; k++)	//2부터 수를 늘려가면서 소수가 아니라면 지움 
	{
		if(arr[k]==0)	//이미 지운수라면 넘어감 
			continue;

		for(i=2; i<k; i++)	//소수인지 아닌지 판별 
		{
			if(k % i ==0)	//소수가 아니라면 지움 
			{
				arr[k] = 0;
				break;
			}
		}
	}

	printf("입력한 수 %d보다 작은 소수는 다음과 같습니다.\n", n);
	for(i=1; i<n; i++)
	{
		if(arr[i]==0)	//지운 수라면 표시하지 않음 
			continue;
		else
			printf("%d ", arr[i]);
	}
	
	return 0;
}
