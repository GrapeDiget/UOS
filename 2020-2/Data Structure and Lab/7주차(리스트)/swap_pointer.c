#include <stdio.h>

void swap(int *px, int *py) {
	int tmp = *px;
	*px = *py;
	*py = tmp;
}

int main()
{
	int x=3, y=5;
	printf("x: %d \t y: %d \n", x, y);
	swap(&x, &y);
	printf("swap() È£Ãâ ÈÄ \n");
	printf("x: %d \t y: %d \n", x, y);
	
	return 0;
}
