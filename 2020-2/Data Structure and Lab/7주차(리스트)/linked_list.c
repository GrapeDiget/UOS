#include <stdio.h>
#include <stdlib.h>

typedef int Element;
typedef struct LinkedNode {
	Element data;
	struct LinkedNode* link;
} Node;

Node* head = NULL;

void init_list() {head = NULL;}
int is_empty() {return head == NULL;}

Node* get_entry(int pos) {
	Node* p = head;
	int i;
	for(i=0; i<pos; i++, p = p->link) {
		if(p == NULL)
			return NULL;
	}
	return p;
}

int size() {
	Node* p;
	int count = 0;
	for(p=head; p != NULL; p = p->link)
		count++;
	return count;
}

void replace(int pos, Element val) {
	Node* node = get_entry(pos);
	if(node != NULL)
		node->data = val;
}

Node* find(Element val) {
	Node* p;
	for(p=head; p != NULL; p = p->link) {
		if(p->data == val)
			return p;
	}
	return NULL;
}

void insert_next(Node* before, Node* node) {
	if(node != NULL) {
		node->link = before->link;
		before->link = node;
	}
}

void insert(int pos, Element val) {
	Node *new_node, *prev;
	
	new_node = (Node*)malloc(sizeof(Node));
	new_node->data = val;
	new_node->link = NULL;
	
	if(pos == 0) {
		new_node->link = head;
		head = new_node;
	}
	else {
		prev = get_entry(pos-1);
		if(prev != NULL)
			insert_next(prev, new_node);
		else
			free(new_node);
	}
}

Node* remove_next(Node* prev) {
	Node* removed = prev->link;
	if(removed != NULL)
		prev->link = removed->link;
	return removed;
}

void delete(int pos)
{
	Node *prev, *removed;
	
	if(pos == 0 && is_empty() == 0) {
		removed = head;
		head = head->link;
		free(removed);
	}
	else {
		prev = get_entry(pos-1);
		if (prev != NULL) {
			removed = remove_next(prev);
			free(removed);
		}
	}
}

//��������7 
void add_tail(Element val) {
	if(!is_empty())
		insert(size(), val);
}
 
//��������9
Element eval_sum() {
	Element sum = 0;
	Node *p = head;
	for(p=head; p != NULL; p = p->link)
    	sum += p->data;
	return sum;
}

//��������10
int count_data(Element val){
	int count = 0;
	Node *p = head;
	for(p=head; p != NULL; p = p->link) {
    	if(p->data == val)
        	count++;
	}
	return count;
}

//��������12
Node* reverse(Node *list) {
	Node *p, *q, *r;
	p = head;
	q = NULL;
	while(p!=NULL) {
		r = q;
		q = p;
		p = p->link;
		q->link = r;
	}
	
	return q;
}

void clear_list() {
	while(is_empty() == 0)
		delete(0);
}
 
void print_list(char* msg) {
	Node* p;
	printf("%s[%2d]: ", msg, size());
	for(p=head; p != NULL; p = p->link)
		printf("%2d ", p->data);
	printf("\n");
}

int main()
{
	int i, n, val;
	Node *p;
	
	init_list();
	printf("����� ����: ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++) {
		printf("��� #%d ������: ", i+1);
		scanf("%d", &val);
		insert(i, val);
	}
/*	
	//��������7 
	printf("�� ���� �߰��� ������: ");
	scanf("%d", &val);
	add_tail(val); 
*/	
	//��������6,7,8 
	printf("������ ���� ����Ʈ: ");
	p=head;
	if(head != NULL) {
		printf("%d", head->data);
		for(p = head->link; p != NULL; p = p->link)
			printf("->%d", p->data);
		printf("\n");
	}
/*	
	//��������8
	delete(0);
	printf("ù ��° ��� ���� �� ���� ����Ʈ: ");
	p=head;
	if(head != NULL) {
		printf("%d", head->data);
		for(p = head->link; p != NULL; p = p->link)
			printf("->%d", p->data);
		printf("\n");
	}
	
	//��������9
	printf("���� ����Ʈ�� ������ ��: %d \n", eval_sum());	

	//��������10
	printf("Ž���� ���� �Է��Ͻÿ�: ");
	scanf("%d", &val);
	printf("%d�� ���� ����Ʈ���� %d�� ��Ÿ���ϴ�.\n", val, count_data(val)); 
*/	
	//��������12
	printf("���� ����Ʈ�� �������� ��ȯ�� ���: ");
	p = reverse(head);
	if(p != NULL) {
		printf("%d", p->data);
		for(p = p->link; p != NULL; p = p->link)
			printf("->%d", p->data);
		printf("\n");
	}
	 
	clear_list();
	
	return 0;
}
