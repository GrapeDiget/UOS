#include <stdio.h>
#include <string.h>

void reverse(char *str, int left, int right) {
	char tmp;
	if (left < right) {
		tmp = str[right];
		str[right] = str[left];
		str[left] = tmp;
		reverse(str, left+1, right-1);
	}
}

int main()
{
	char str[] = "University";
	
	printf("����: %s \n", str);
	reverse(str, 0, strlen(str)-1);
	printf("����: %s \n", str);
	
	return 0;
}
