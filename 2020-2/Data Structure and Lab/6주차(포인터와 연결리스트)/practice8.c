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
	
	printf("주소의 개수: ");
	scanf("%d", &n);
	
	a = (Friend*) malloc(sizeof(Friend)*n);
	
	for(k=0; k<n; k++) {
		printf("이름을 입력하시오: ");
		scanf("%s", a[k].name);
		printf("휴대폰 번호를 입력하시오: ");
		scanf("%s", a[k].phone);
	}
	printf("===========================================\n");
	printf("이름\t\t휴대폰 번호\n"); 
	printf("===========================================\n");
	for(k=0; k<n; k++)
		printf("%s\t\t%s \n", a[k].name, a[k].phone);
	
	printf("===========================================\n");
	
	return 0;
}
