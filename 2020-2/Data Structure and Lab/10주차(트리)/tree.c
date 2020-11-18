#include <stdio.h>
#include <stdlib.h>

//Tree 구현 
typedef char TElement;
typedef struct BinTrNode {
	TElement data;
	struct BinTrNode *left;
	struct BinTrNode *right;
} TNode;
TNode *root;

void init_tree() {root = NULL;}
int is_empty_tree() {return root == NULL;}
TNode* get_root() {return root;}

TNode* create_tree(TElement val, TNode* l, TNode* r) {
	TNode* n = (TNode*)malloc(sizeof(TNode));
	n->data = val;
	n->left = l;
	n->right= r;
	return n;
}

void preorder(TNode* n) {
	if(n != NULL) {
		printf("[%c] ", n->data);
		preorder(n->left);
		preorder(n->right);
	}
}

void inorder(TNode* n) {
	if(n != NULL) {
		inorder(n->left);
		printf("[%c] ", n->data);
		inorder(n->right);
	}
}

void postorder(TNode* n) {
	if(n != NULL) {
		postorder(n->left);
		postorder(n->right);
		printf("[%c] ", n->data);
	}
}

//queue 부문 
#define MAX_QUEUE_SIZE 100
typedef TNode* Element;

Element data[MAX_QUEUE_SIZE];
int front;
int rear;

void error(char str[])
{
	printf("%s \n", str);
	exit(1);
}

void init_queue()	{front = rear = 0;}
int is_empty()		{return front == rear;}
int is_full()		{return front == (rear + 1) % MAX_QUEUE_SIZE;}
int size()			{return (rear - front + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;}

void enqueue(Element val)
{
	if(is_full())
		error("큐 포화 에러");
	rear = (rear + 1) % MAX_QUEUE_SIZE;
	data[rear] = val;
}

Element dequeue()
{
	if(is_empty())
		error("큐 공백 에러");
	front = (front + 1) % MAX_QUEUE_SIZE;
	return data[front];
}

Element peek()
{
	if(is_empty())
		error("큐 공백 에러");
	return data[(front + 1) % MAX_QUEUE_SIZE];
}

//lever-order 조회
void levelorder(TNode* root) {
	TNode* n;
	
	if(root == NULL) return;
	init_queue();
	enqueue(root);
	while(!is_empty()) {
		n = dequeue();
		if(n != NULL) {
			printf("[%c] ", n->data);
			enqueue(n->left);
			enqueue(n->right);
		}
	}
}

//Tree 연산
int count_node(TNode* n) {
	if(n == NULL) return 0;
	return 1 + count_node(n->left) + count_node(n->right);
}

int count_leaf(TNode* n) {
	if(n == NULL) return 0;
	if(n->left == NULL && n->right == NULL) return 1;
	else return count_leaf(n->left) + count_leaf(n->right);
}

int calc_height(TNode* n) {
	int hLeft, hRight;
	if(n==NULL) return 0;
	hLeft = calc_height(n->left);
	hRight = calc_height(n->right);
	return (hLeft > hRight) ? hLeft + 1 : hRight + 1;
}

//main함수
int main()
{
	TNode *a, *b, *c, *d, *e, *f, *g, *h, *i, *j;
	
	init_tree();
	g = create_tree('G', NULL, NULL);
	h = create_tree('H', NULL, NULL); 
	i = create_tree('I', NULL, NULL); 
	j = create_tree('J', NULL, NULL); 
	f = create_tree('F', NULL, NULL); 
	d = create_tree('D', g, h);
	e = create_tree('E', i, j);
	b = create_tree('B', d, e);
	c = create_tree('C', NULL, f);
	a = create_tree('A', b, c);
	
	printf("\n   In-Order : "); inorder(a);
	printf("\n  Pre-Order : "); preorder(a);
	printf("\n Post-Order : "); postorder(a);
	printf("\nLevel-Order : "); levelorder(a);
	printf("\n");
	
	printf(" 노드의 개수 = %d\n", count_node(a));
	printf(" 단말의 개수 = %d\n", count_leaf(a));
	printf(" 트리의 높이 = %d\n", calc_height(a));
	
	return 0;
}
