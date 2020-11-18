#include <stdio.h>
#include <stdlib.h>

//Tree 구현 
typedef int TElement;
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

//mystery (연습문제 11) 
int max(TElement a, TElement b) {
	return (a > b) ? a : b;
}

int mystery(TNode* p) {
	if(p == NULL) return 0;
	else if(p->left == NULL && p->right == NULL)
		return p->data;
	else
		return max(mystery(p->left), mystery(p->right));
}

//sum (연습문제 12) 
int sum(TNode *p) {
	if(p == NULL) return 0;
	return p->data + sum(p->left) + sum(p->right);
}

//printBigNode (연습문제 13)
void printBigNode(TNode *p, int th) {
	if(p != NULL) {
		if(p->data < th)
			printf("%d보다 작은 노드: %d \n", th, p->data);
		printBigNode(p->left, th);
		printBigNode(p->right, th);
	}
}

//main함수
int main()
{
	TNode *m1, *m2, *m3, *m4, *m5, *m6, *m7;
	int num;
	
	init_tree();
	m1 = create_tree(4, NULL, NULL);
	m2 = create_tree(2, NULL, NULL);
	m3 = create_tree(5, m1, m2);
	m4 = create_tree(8, NULL, NULL);
	m5 = create_tree(6, NULL, NULL);
	m6 = create_tree(1, m4, m5);
	root = create_tree(3, m3, m6);
	
	//연습문제 11 출력 
	printf("mystery함수의 반환: %d \n\n", mystery(root));
	
	//연습문제 12 출력 
	printf("노드의 합은 %d입니다. \n\n", sum(root));
	
	//연습문제 13 출력
	printf("값을 입력하시오: "); 
	scanf("%d", &num);
	printBigNode(root, num);	 
	
	return 0;
}
