// power set : A�� �����̸� A�� ��� �κ����� 
// ����������ǻ�Ͱ��к� 2017440018 ���ȣ
// 0519-1.c

#include<stdio.h>

int main()
{
	int element;
	int i, j, k, l;
	int numpwr = 1;
	
	printf("number of element: "); 
	scanf("%i", &element);
	//printf("element = %i \n", element);
	
	printf("A= { ");
	for(i=1; i<=element; i++){
		numpwr *= 2;
		if(i==element)
			printf("%i", i);
		else
			printf("%i, ", i);
	}
	printf(" } \n");
	
	//power set ���� ���
	printf("element %i, number of powerset = %d \n\n\n", element, numpwr); 
	
	printf("P(A) = { @, ");
	for(i=1; i<=element; i++){
		printf("{%i}, ", i);
	}
	
	for(i=1; i<=element; i++){
		for(j=i+1; j<=element; j++){
			printf("{%i, %i}, ", i, j);
		}
	}
	
	for(i=1; i<=element; i++){
		for(j=i+1; j<=element; j++){
			for(k=j+1; k<=element; k++){
				printf("{%i, %i, %i}, ", i, j, k);
			}
		}
	}
	
	for(i=1; i<=element; i++){
		for(j=i+1; j<=element; j++){
			for(k=j+1; k<=element; k++){
				for(l=k+1; l<=element; l++){
					if(i==element-3)
						printf("{%i, %i, %i, %i}", i, j, k, l);
					else
						printf("{%i, %i, %i, %i}, ", i, j, k, l);
				}
			}
		}
	}
	printf("} \n");
	
	return 0;		
}
