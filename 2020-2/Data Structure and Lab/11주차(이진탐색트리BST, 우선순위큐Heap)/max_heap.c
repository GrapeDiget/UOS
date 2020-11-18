#include <stdio.h>
#include <stdlib.h>

#define MAX_HEAP_NODE 200

void error(char str[]) {
	printf("%s \n", str);
	exit(1);
}

typedef int HNode;
#define Key(n) (n)

HNode heap[MAX_HEAP_NODE];
int heap_size;

#define Parent(i)  (heap[i/2])
#define Left(i)  (heap[2*i])
#define Right(i)  (heap[2*i+1])

void init_heap() {heap_size = 0;}
int is_empty_heap() {return heap_size == 0;}
int is_full_heap() {return (heap_size == MAX_HEAP_NODE - 1);}
HNode find_heap() {return heap[1];}

void insert_heap(HNode n) {
	int i;
	if(is_full_heap()) return;
	i = ++(heap_size);
	while(i != 1 && Key(n) > Key(Parent(i))) {
		heap[i] = Parent(i);
		i /= 2;
	}
	heap[i] = n;
}

HNode delete_heap() {
	HNode hroot, last;
	int parent = 1, child = 2;
	
	if(is_empty_heap() != 0)
		error("�� Ʈ�� ���� ����");
	
	hroot = heap[1];
	last = heap[heap_size--];
	while(child <= heap_size) {
		if(child<heap_size && Key(Left(parent)) < Key(Right(parent)))
			child++;
		if(Key(last) >= Key(heap[child]))
			break;
		heap[parent] = heap[child];
		parent = child;
		child *= 2;
	}
	heap[parent] = last;
	return hroot;
}

void print_heap() {
	int i, level;
	for(i=1, level=1; i<= heap_size; i++) {
		if(i==level) {
			printf("\n");
			level *= 2;
		}
		printf("%2d ", Key(heap[i]));
	}
	printf("\n------------------");
}

int main()
{
	init_heap();
	insert_heap(2);	insert_heap(5);
	insert_heap(4);	insert_heap(8);
	insert_heap(9);	insert_heap(3);
	insert_heap(7);	insert_heap(3);
	print_heap();
	
	delete_heap();	print_heap();
	delete_heap();	print_heap();
	printf("\n");
	
	return 0;
}
