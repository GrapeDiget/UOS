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
		printf("[%2d] ", n->data);
		preorder(n->left);
		preorder(n->right);
	}
}

void inorder(TNode* n) {
	if(n != NULL) {
		inorder(n->left);
		printf("[%2d] ", n->data);
		inorder(n->right);
	}
}

void postorder(TNode* n) {
	if(n != NULL) {
		postorder(n->left);
		postorder(n->right);
		printf("[%2d] ", n->data);
	}
}

//이진탐색트트리 탐색
TNode* search(TNode *n, int key) {
	if(n == NULL)	return NULL;
	else if(key == n->data)	return n;
	else if(key < n->data) return search(n->left, key);
	else return search(n->right, key);
}

void search_BST(int key) {
	TNode* n = search(root, key);
	if(n != NULL)
		printf("[탐색 연산] : 성공 [%d] = 0x%x\n", n->data, n);
	else
		printf("[탐색 연산] : 실패 : No %d!\n", key);
}

//이진탐색트리 삽입
int insert(TNode *r, TNode *n) {
	if(n->data == r->data) return 0;
	else if(n->data < r->data) {
		if(r->left == NULL)	r->left = n;
		else insert(r->left, n);
	}
	else {
		if(r->right == NULL) r->right = n;
		else insert(r->right, n);
	}
	return 1;
}

void insert_BST(int key) {
	TNode *n = create_tree(key, NULL, NULL);
	if(is_empty_tree())
		root = n;
	else if (insert(root, n) == 0)
		free(n);
}

//이진탐색트리 삭제
void delete (TNode *parent, TNode *node) {
	TNode *child, *succ, *succp;
	
	//case 1: 단말 노드 삭제
	if((node->left == NULL && node->right == NULL)) {
		if(parent == NULL) root = NULL;
		else {
			if(parent->left == node)
				parent->left = NULL;
			else parent->right = NULL;
		}
	}
	
	//case 2: 자식 노드가 1개인 경우
	else if(node->left == NULL || node->right == NULL) {
		child = (node->left != NULL) ? node->left : node->right;
		if(node == root) root = child;
		else {
			if (parent->left == node)
				parent->left = child;
			else parent->right = child;
		}
	}
	
	//case3: 자식 노드가 2개인 경우
	else {
		succp = node;
		succ = node->right;
		while(succ->left != NULL) {
			succp = succ;
			succ = succ->left;
		}
		if(succp->left == succ)
			succp->left = succ->right;
		else succp->right = succ->right;
		
		node->data = succ->data;
		node = succ;
	}
	
	//삭제하는 노드를 반환
	free(node);
}

void delete_BST(int key) {
	TNode *parent = NULL;
	TNode *node = root;
	
	if(node == NULL) return;
	while(node != NULL && node->data != key) {
		parent = node;
		node = (key < node->data) ? node->left : node->right;
	}
	if(node == NULL)
		printf("Error: key is not in the tree!\n");
	else delete(parent, node);
}
 
//main함수
int main()
{
	//삽입 연산 테스트
	printf("[삽입 연산] : 35 18 7 26 12 3 68 22 30 99");
	init_tree();
	insert_BST(35);	insert_BST(18);
	insert_BST(7);	insert_BST(26);
	insert_BST(12);	insert_BST(3);
	insert_BST(68);	insert_BST(22);
	insert_BST(30);	insert_BST(99);
	
	//트리 정보 출력 
	printf("\n   In-Order : ");	inorder(root);
	printf("\n  Pre-Order : "); preorder(root);
	printf("\n Post-Order : "); postorder(root);
	
	printf("\n");
	//탐색 연산 테스트
	search_BST(26);
	search_BST(25);
	
	//삭제 연산 테스트
	printf("[삭제 연산] : 3");		delete_BST(3);
	printf("\n   In-Order : ");		inorder(root); 
	printf("\n[삭제 연산] : 68");	delete_BST(68);
	printf("\n   In-Order : ");		inorder(root); 
	printf("\n[삭제 연산] : 18");	delete_BST(18);	
	printf("\n   In-Order : ");		inorder(root); 
	printf("\n[삭제 연산] : 35");	delete_BST(35);
	printf("\n   In-Order : ");		inorder(root); 
	
	return 0;
}
