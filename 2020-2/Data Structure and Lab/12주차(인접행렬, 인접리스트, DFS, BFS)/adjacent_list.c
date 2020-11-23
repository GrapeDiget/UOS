#include <stdio.h>
#include <stdlib.h>
#define MAX_VTXS	256

void error(char str[]) {
	printf("%s \n", str);
	exit(1);
}

typedef struct GraphNode {
	int id;
	struct GraphNode* link;
} GNode;

typedef char VtxData;
GNode* adj[MAX_VTXS];			//������� �ش��ϴ� vertex�� pointer�� ��Ƴ��� array 
int vsize;
VtxData vdata[MAX_VTXS];		//vertex�� ������ ������ 

int is_empty_graph() {return (vsize==0);}
int is_full_graph() {return (vsize >= MAX_VTXS);}

void init_graph() {
	int i;
	vsize = 0;
	for (i=0; i<MAX_VTXS; i++)
		adj[i] = NULL;
}

void reset_graph() {
	int i;
	GNode* n;
	for(i=0; i<vsize; i++) {
		while(adj[i] != NULL) {
			n = adj[i];
			adj[i] = n->link;
			free(n);
		}
	}
	vsize = 0;
}

void insert_vertex(VtxData name) {
	if(is_full_graph())
		error("Error: �׷��� ������ ���� �ʰ�\n");
	else
		vdata[vsize++] = name;
}

void insert_edge(int u, int v) {	//v��° vertex�� u��° vertex�� ������� �ش�. 
	GNode* n = (GNode*)malloc(sizeof(GNode));
	n->link = adj[u];
	n->id = v;
	adj[u] = n;
}

void print_graph(char *msg) {
	int i;
	GNode* v;
	printf("%s%d \n", msg, vsize);
	for(i=0; i<vsize; i++) {
		printf("%c  ", vdata[i]);
		
		for(v = adj[i]; v != NULL; v = v->link)
			printf("  %c", vdata[v->id]);
		printf("\n");
	}
}

void load_graph(char *filename) {
	int i, j, val, n;
	char str[80];
	FILE *fp = fopen(filename, "r");
	if(fp != NULL) {
		init_graph();
		fscanf(fp, "%d", &n);
		for(i=0; i<n; i++) {
			fscanf(fp, "%s", str);
			insert_vertex(str[0]);
			for(j=0; j<n; j++) {
				fscanf(fp, "%d", &val);
				if(val != 0)
					insert_edge(i, j);
			}
		}
		fclose(fp);
	}
}

int main()
{
	load_graph("graph.txt");
	print_graph("�׷���(��������Ʈ)\n"); 
	
	return 0;
}
