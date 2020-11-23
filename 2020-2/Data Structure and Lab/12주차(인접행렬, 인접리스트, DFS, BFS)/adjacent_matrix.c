#include <stdio.h>
#include <stdlib.h>
#define MAX_VTXS	256

void error(char str[]) {
	printf("%s \n", str);
	exit(1);
}

typedef char VtxData;
int adj[MAX_VTXS][MAX_VTXS];	//edge ������ �����ϴ� array 
int vsize;
VtxData vdata[MAX_VTXS];		//vertex�� ������ ������ 

int is_empty_graph() {return (vsize==0);}
int is_full_graph() {return (vsize >= MAX_VTXS);}

void init_graph() {
	int i, j;
	vsize = 0;
	for (i=0; i<MAX_VTXS; i++)
		for (j=0; j<MAX_VTXS; j++)
			adj[i][j] = 0;
}

void insert_vertex(VtxData name) {
	if(is_full_graph())
		error("Error: �׷��� ������ ���� �ʰ�\n");
	else
		vdata[vsize++] = name;
}

void insert_edge(int u, int v, int val) {
	adj[u][v] = val;
}

void insert_edge2(int u, int v, int val) {
	adj[u][v] = adj[v][u] = val;
}

void print_graph(char *msg) {
	int i, j;
	printf("%s", msg);
	printf("%d \n", vsize);
	for(i=0; i<vsize; i++) {
		printf("%c  ", vdata[i]);
		for(j=0; j<vsize; j++)
			printf("  %d", adj[i][j]);
		printf("\n");
	}
}

int main()
{
	int i;
	
	init_graph();
	for(i=0; i<4; i++)
		insert_vertex('A' + i);
	
	insert_edge2(0, 1, 1);
	insert_edge2(0, 3, 1);
	insert_edge2(1, 2, 1);
	insert_edge2(1, 3, 1);
	insert_edge2(2, 3, 1);
	print_graph("�׷���(�������)\n");
	
	return 0;
}
