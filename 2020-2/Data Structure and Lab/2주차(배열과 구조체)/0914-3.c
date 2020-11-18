#include <stdio.h>

void insert(int array[], int loc, int value);
void delete(int array[], int loc);
void printarray(int array[]);

int items = 9;
int main()
{
	int arr[10]={1, 2, 3, 4, 5, 6, 7, 8, 9};
	printarray(arr);
	
	insert(arr, 1, 10);
	printarray(arr);
	
	delete(arr, 5);
	printarray(arr);
		
	return 0;
}

void insert(int array[], int loc, int value) {
	int c;
	for(c=items-1; c>=loc-1; c--)
		array[c+1] = array[c];
	array[loc-1] = value;
	items++;
}

void delete(int array[], int loc) {
	int c;
	for(c=(loc-1); c<(items-1); c++)
		array[c] = array[c+1];
	array[items-1] = 0;
	items--;
}

void printarray(int array[]) {
	int i;
	for(i=0; i<items; i++)
		printf("%d ", array[i]);
	printf("\n");
}
