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
		if(n->left == NULL && n->right == NULL) printf("[%d] ", n->data);
		else printf("[%c] ", n->data);
		preorder(n->left);
		preorder(n->right);
	}
}

void inorder(TNode* n) {
	if(n != NULL) {
		inorder(n->left);
		if(n->left == NULL && n->right == NULL) printf("[%d] ", n->data);
		else printf("[%c] ", n->data);
		inorder(n->right);
	}
}

void postorder(TNode* n) {
	if(n != NULL) {
		postorder(n->left);
		postorder(n->right);
		if(n->left == NULL && n->right == NULL) printf("[%d] ", n->data);
		else printf("[%c] ", n->data);
	}
}

//수식 계산
double evaluate(TNode* n) {
	int op1, op2;
	if(n==NULL) return 0;
	if(n->left == NULL && n->right == NULL) return n->data;
	else {
		op1 = evaluate(n->left);
		op2 = evaluate(n->right);
		switch (n->data) {
			case '+' : return op1 + op2;
			case '-' : return op1 - op2;
			case '*' : return op1 * op2;
			case '/' : return op1 / op2;
		}
		return 0;
	}
}

//main함수
int main()
{
	TNode *n1, *n2, *n3, *n4, *n5, *n6, *n7, *n8, *n9, *n10;
	
	init_tree();
	n1 = create_tree(3, NULL, NULL);
	n2 = create_tree(2, NULL, NULL);
	n3 = create_tree('*', n1, n2);
	n4 = create_tree(5, NULL, NULL);
	n5 = create_tree(4, NULL, NULL);
	n6 = create_tree('+', n4, n5);
	n7 = create_tree(9, NULL, NULL);
	n8 = create_tree(8, NULL, NULL);
	n9 = create_tree('-', n7, n8);
	n10 = create_tree('+', n3, n6);	
	root = create_tree('/', n10, n9);
	
	printf(" Post-Order : "); postorder(root);
	printf("\n"); 
	printf(" 계산 결과 = %lf\n", evaluate(root)); 
	
	return 0;
}
