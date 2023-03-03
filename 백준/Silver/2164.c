#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node* link;
}Node;

typedef struct queue
{
	Node* front;
	Node* rear;
	int count;
}queue;

void init_queue(queue* q)
{
	q -> front = NULL;
	q -> rear = NULL;
	q -> count = 0;
}

int is_empty(queue* q)
{
	return(q -> count == 0);
}

void enqueue(queue *q, int a)
{
	Node *newnode = (Node*)malloc(sizeof(Node));
	newnode -> data = a;
	newnode -> link = NULL;
	
	if(is_empty(q))
	{
		q -> front = newnode;
	}
	else
	{
		q -> rear -> link = newnode;
	}
	q -> rear = newnode;
	q -> count++;
}
int dequeue(queue *q)
{
	Node* ptr;
	int data;
	if(is_empty(q))
	{
		printf("Error\n");
		return 0;
	}
	else
	{
		ptr = q -> front;
		data = ptr -> data;
		q -> front = ptr -> link;
		free(ptr);
		q -> count--;
		return data;
	}
	
}

int main(void) 
{
	int N;
	scanf("%d",&N);
	queue a;
	
	init_queue(&a);
	for(int i = 1; i <= N; i++)
	{
		enqueue(&a,i);
	}
	
	int num;
	for(int i = 0; i < N - 1; i++)
	{
		num = dequeue(&a);
		num = dequeue(&a);
		enqueue(&a,num);
	}
	num = dequeue(&a);
	printf("%d\n",num);
}

