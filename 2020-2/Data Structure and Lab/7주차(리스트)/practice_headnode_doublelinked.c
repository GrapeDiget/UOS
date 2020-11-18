#include <stdio.h>
#include <stdlib.h>

typedef int Element;
typedef struct DLinkedNode {
	Element data;
	struct DLinkedNode *prev;
	struct DLinkedNode *next;
} Node;

Node org;

void init_list() {org.next = NULL;}
Node* get_head() {return org.next;}
int is_empty()   {return get_head() == NULL;}

Node* get_entry(int pos) {
	Node* p = &org;
	int i = -1;
	for(i=-1; i<pos; i++, p = p->next) {
		if(p == NULL)
			break;
	}
	return p;
}

void replace(int pos, Element val) {
	Node* node = get_entry(pos);
	if(node != NULL)
		node->data = val;
}

int size() {
	Node* p;
	int count = 0;
	for(p=get_head(); p != NULL; p = p->next)
		count++;
	return count;
}

Node* find(Element val) {
	Node* p;
	for(p=get_head(); p != NULL; p = p->next) {
		if(p->data == val)
			return p;
	}
	return NULL;
}

void print_list(char* msg) {
	Node* p;
	printf("%s[%2d]: ", msg, size());
	for(p=get_head(); p != NULL; p = p->next)
		printf("%2d ", p->data);
	printf("\n");
}

void insert_next(Node *before, Node *node) {
	node->prev = before;
	node->next = before->next;
	if(before->next != NULL)
		before->next->prev = node;
	before->next = node;
}

void insert(int pos, Element val) {
	Node *new_node;
	Node *prev = get_entry(pos-1);
	if(prev != NULL) {
		new_node = (Node*)malloc(sizeof(Node));
		new_node->data = val;
		new_node->prev = NULL;
		new_node->next = NULL;
		insert_next(prev, new_node);
	}
}

void remove_curr(Node *n) {
	if(n->prev != NULL)
		n->prev->next = n->next;
	if(n->next != NULL)
		n->next->prev = n->prev;
}

void delete(int pos)
{
	Node *n = get_entry(pos);
	if(n != NULL)
		remove_curr(n);
	free(n);
}

void clear_list() {
	while(is_empty() == 0)
		delete(0);
}

int main()
{
	init_list();
	insert(0, 10);
	insert(0, 20);
	insert(1, 30);
	insert(size(), 40);
	insert(2, 50);
	print_list("헤드노드가 있고 이중연결리스트로 구현한 List(삽입x5)");
	
	replace(2, 90);
	print_list("헤드노드가 있고 이중연결리스트로 구현한 List(교체x1)");
	
	delete(2);
	delete(size()-1);
	delete(0);
	print_list("헤드노드가 있고 이중연결리스트로 구현한 List(삭제x3)");
		
	clear_list();
	print_list("헤드노드가 있고 이중연결리스트로 구현한 List(정리후)");  
	
	return 0;
}
