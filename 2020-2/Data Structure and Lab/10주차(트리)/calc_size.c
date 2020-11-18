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

//파일탐색기 용량 계산
int calc_size(TNode* n) {
	if (n == NULL) return 0;
	return n->data + calc_size(n->left) + calc_size(n->right);
}
 
//main함수
int main()
{
	TNode *m2, *m3, *m4, *m5;
	
	init_tree();
	m4 = create_tree(200, NULL, NULL);
	m5 = create_tree(500, NULL, NULL);
	m3 = create_tree(100, m4, m5);
	m2 = create_tree(50, NULL, NULL);
	root = create_tree(0, m2, m3);
	
	printf(" 폴더 용량 = %d KB\n", calc_size(root));
	
	return 0;
}
