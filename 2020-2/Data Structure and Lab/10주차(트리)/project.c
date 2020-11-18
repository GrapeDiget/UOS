#include <stdio.h>
#include <stdlib.h>

//Tree ���� 
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

//Tree ����
int getCount(TNode* n) {
	if(n == NULL) return 0;
	return 1 + getCount(n->left) + getCount(n->right);
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

//(1) ��������Ʈ�� �˻�
int checkNumber(TNode *n, int id, int max) {
	if(n == NULL) return 1;
	if(id > max) return 0;
	if(n->left != NULL && checkNumber(n->left, id*2, max) == 0) return 0;
	if(n->right != NULL && checkNumber(n->right, id*2+1, max) == 0) return 0;
	return 1;
}

int is_complete_binary_tree(TNode *p) {
	int count = getCount(p);
	int ret = checkNumber(p, 1, count);
	
	if(ret == 0) printf("���� ���� Ʈ���� �ƴմϴ�. \n");
	else printf("���� ���� Ʈ���Դϴ�. \n");
	return ret;
}

//(2) ������ node�� ������ ���Ѵ�.
int checkLevel(TNode *p, TNode *n, int level) {
	int ll=0, lr=0;
	if(p==n) return level;
	if(p->left != NULL)
		ll = checkLevel(p->left, n, level + 1);
	if(p->right != NULL)
		lr = checkLevel(p->right, n, level + 1);
	
	if(ll > 0) return ll;
	else return lr;
}

int calcLevel(TNode *p, TNode *n) {
	int level = 0;
	if(p != NULL)
		level = checkLevel(p, n, 1);
	
	if(level > 0) printf("����� ������ %d. \n", level);
	else printf("Ʈ���� ���� ����Դϴ�. \n");
	
	return level;
}

//(3) ����Ʈ���� ���� ���� �ִ����� �˻�
int checkBalanced(TNode *p) {
	int lh, rh, dh;
	if(p == NULL) return 1;
	
	lh = calc_height(p->left);
	rh = calc_height(p->right);
	dh = rh - lh;
	if(dh < -1 || dh > 1) return 0;
	
	if(checkBalanced(p->left) == 0) return 0;
	return checkBalanced(p->right);
}

int isBalanced(TNode *p) {
	int ret = checkBalanced(p);
	if(ret == 0) printf("Unbalanced tree. \n");
	else printf("Balanced tree. \n");
	
	return ret;
}

//(4) ����� ������ ���� ���ϴ� ����
int calcPathLength(TNode *p, int level) {
	int llen = 0, rlen = 0;
	if(p == NULL) return 0;
	
	llen = calcPathLength(p->left, level + 1);
	rlen = calcPathLength(p->right, level + 1);
	return llen + rlen + level;
}

int pathLength(TNode *p) {
	int len = calcPathLength(p, 0);
	printf("��ü ����� ���̴� %d�Դϴ�. \n", len);
	
	return len;
}

//main�Լ�
int main()
{
	TNode *a, *b, *c, *d, *e, *f;
	
	init_tree();
	c = create_tree('C', NULL, NULL);
	d = create_tree('D', NULL, NULL);
	b = create_tree('B', c, d);
	f = create_tree('F', NULL, NULL);
	e = create_tree('E', NULL, f);
	a = create_tree('A', b, e);
	
	int binary = is_complete_binary_tree(a);
	int level = calcLevel(a, f);
	int balance = isBalanced(a);
	int len = pathLength(a);	
	
	return 0;
}
