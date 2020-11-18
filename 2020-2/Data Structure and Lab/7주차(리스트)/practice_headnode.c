#include <stdio.h>
#include <stdlib.h>

typedef int Element;
typedef struct LinkedNode {
	Element data;
	struct LinkedNode* link;
} Node;

Node org;

void insert_next(Node *prev, Node *node) {
	if(node != NULL) {
		node->link = prev->link;
		prev->link = node;
	}
}

Node* remove_next(Node* prev) {
	Node* removed = prev->link;
	if(removed != NULL)
		prev->link = removed->link;
	return removed;
}

void init_list() {org.link = NULL;}
Node* get_head() {return org.link;}
int is_empty()   {return get_head() == NULL;}

Node* get_elem(int pos) {
	Node* p = &org;
	int i = -1;
	for(i=-1; i<pos; i++, p = p->link) {
		if(p == NULL)
			break;
	}
	return p;
}

Node* find(Element val) {
	Node* p;
	for(p=get_head(); p != NULL; p = p->link) {
		if(p->data == val)
			return p;
	}
	return NULL;
}

int size() {
	Node* p;
	int count = 0;
	for(p=get_head(); p != NULL; p = p->link)
		count++;
	return count;
}

void replace(int pos, Element val) {
	Node* node = get_elem(pos);
	if(node != NULL)
		node->data = val;
}

void insert(int pos, Element val) {
	Node *new_node;
	Node *prev = get_elem(pos-1);
	if(prev != NULL) {
		new_node = (Node*)malloc(sizeof(Node));
		new_node->data = val;
		new_node->link = NULL;
		insert_next(prev, new_node);
	}
}

void delete(int pos)
{
	Node *prev = get_elem(pos-1);
	Node *removed = remove_next(prev);
	free(removed);
}

void clear_list() {
	while(is_empty() == 0)
		delete(0);
}
 
void print_list(char* msg) {
	Node* p;
	printf("%s[%2d]: ", msg, size());
	for(p=get_head(); p != NULL; p = p->link)
		printf("%2d ", p->data);
	printf("\n");
}

int main()
{
	init_list();
	insert(0, 10);
	insert(0, 20);
	insert(1, 30);
	insert(size(), 40);
	insert(2, 50);
	print_list("헤드노드가 있는 List(삽입x5)");
	
	replace(2, 90);
	print_list("헤드노드가 있는 List(교체x1)");
	
	delete(2);
	delete(size()-1);
	delete(0);
	print_list("헤드노드가 있는 List(삭제x3)");
		
	clear_list();
	print_list("헤드노드가 있는 List(정리후)");  
	
	return 0;
}
