//미로 탐색알고리즘 
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_QUEUE_SIZE 100

//위치 정보 구조체
typedef struct {
	int x;
	int y;
} Location2D;

typedef Location2D Element;

//QUEUE의 연산 
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

//QUEUE 함수를 이용한 DEQUE의 연산 
void init_deque() {init_queue();}
void add_rear(Element val) {enqueue(val);}
Element delete_front() {return dequeue();}
Element get_front() {return peek();}

void add_front(Element val)
{
	if(is_full())
		error("덱 포화 에러");
	data[front] = val;
	front = (front - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
}

Element delete_rear()
{
	Element ret;
	if(is_empty())
		error("덱 공백 에러");
	ret = data[rear];
	rear = (rear - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
	return ret;
}

Element get_rear()
{
	if(is_empty())
		error("덱 공백 에러");
	return data[rear];
}

//maze problem에 필요한 연산
#define MAZE_SIZE 6
char map[MAZE_SIZE][MAZE_SIZE] = {
	{'1', '1', '1', '0', '0', '0'},
	{'e', '0', '1', '0', '1', '0'},
	{'1', '0', '1', '0', '1', '0'},
	{'0', '0', '0', '0', '1', '0'},
	{'1', '0', '1', '0', '1', 'x'},
	{'0', '0', '0', '0', '0', '1'},
};

void init_map()
{
	int i, j;
	map[1][0] = 'e';
	for(i = 0; i < MAZE_SIZE; i++) {
		for(j = 0; j < MAZE_SIZE; j++) {
			if(map[i][j] == '.') {
				 map[i][j] = '0';
			}
		}
	}
}

void print_map(char msg[])
{
	int i, j;
	
	printf("%s \n", msg);
	for(i = 0; i < MAZE_SIZE; i++) {
		for(j = 0; j < MAZE_SIZE; j++) {
			printf(" %c ", map[i][j]);
		}
		printf("\n");
	}
	printf("\n"); 
}

Location2D getLocation2D(int x, int y) {
	Location2D p;
	p.x = x;
	p.y = y;
	return p;
}

int is_valid(int x, int y) {
	if(x < 0 || y < 0 || x >= MAZE_SIZE || y >= MAZE_SIZE)
		return 0;
	else if(map[x][y] == '1' || map[x][y] == '.')
		return 0;
	else if(map[x][y] == '0' || map[x][y] == 'x')
		return 1;
}

int DFS()
{
	int x, y;
	Location2D here;
	
	init_deque();
	add_rear(getLocation2D(1, 0));
	printf("DFS: ");
	while(is_empty() == 0) {
		here = delete_rear();
		x = here.x;
		y = here.y;
		if(map[x][y] == '.')
			continue;
		printf("(%2d, %2d) -> ", here.x, here.y);
		if(map[x][y] == 'x')
			return 1;
		else {
			map[x][y] = '.';
			if(is_valid(x-1, y))	add_rear(getLocation2D(x-1, y));
			if(is_valid(x-1, y+1))	add_rear(getLocation2D(x-1, y+1));
			if(is_valid(x, y+1))	add_rear(getLocation2D(x, y+1));
			if(is_valid(x+1, y+1))	add_rear(getLocation2D(x+1, y+1));
			if(is_valid(x+1, y))	add_rear(getLocation2D(x+1, y));
			if(is_valid(x+1, y-1))	add_rear(getLocation2D(x+1, y-1));
			if(is_valid(x, y-1))	add_rear(getLocation2D(x, y-1));
			if(is_valid(x-1, y-1))	add_rear(getLocation2D(x-1, y-1));
		}
	}
	return 0;
}

int BFS()
{
	int x, y;
	Location2D here;
	
	init_deque();
	add_rear(getLocation2D(1, 0));
	printf("BFS: ");
	while(is_empty() == 0) {
		here = delete_front();
		x = here.x;
		y = here.y;
		if(map[x][y] == '.')
			continue;
		printf("(%2d, %2d) -> ", here.x, here.y);
		if(map[x][y] == 'x')
			return 1;
		else {
			map[x][y] = '.';
			if(is_valid(x-1, y))	add_rear(getLocation2D(x-1, y));
			if(is_valid(x-1, y+1))	add_rear(getLocation2D(x-1, y+1));
			if(is_valid(x, y+1))	add_rear(getLocation2D(x, y+1));
			if(is_valid(x+1, y+1))	add_rear(getLocation2D(x+1, y+1));
			if(is_valid(x+1, y))	add_rear(getLocation2D(x+1, y));
			if(is_valid(x+1, y-1))	add_rear(getLocation2D(x+1, y-1));
			if(is_valid(x, y-1))	add_rear(getLocation2D(x, y-1));
			if(is_valid(x-1, y-1))	add_rear(getLocation2D(x-1, y-1));
		}
	}
	return 0;
}

int main()
{
	int i, j;
	init_map();
	
	print_map("DFS 실행 이전");
	printf("%s \n\n", DFS() ? "성공" : "실패");
	print_map("DFS 실행 이후");
	
	init_map();
	print_map("BFS 실행 이전"); 
	printf("%s \n\n", BFS() ? "성공" : "실패"); 
	print_map("BFS 실행 이후");
	return 0;
}
