#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swapChars(char* ch1, char* ch2) {
	char tmp;
	tmp = *ch1;
	*ch1 = *ch2;
	*ch2 = tmp;
}

void swapRandom(char* str) {
	int pos1 = rand() % strlen(str);
	int pos2 = rand() % strlen(str);
	swapChars(str+pos1, str+pos2);
	printf("[%d] <-> [%d] \n", pos1, pos2);
}

int main()
{
	char str[20];
	int i;
	
	strcpy(str, "University");
	for(i=0; i<10; i++) {
		swapRandom(str);
		printf("%s \n", str);
		getch();
	}
	
	return 0;
}

