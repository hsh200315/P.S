#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 10866

typedef struct Queue{
	int front, rear;
	int max;
	int count;
	int *data;
}Queue;

void init_Queue(Queue *q, int size)
{
	q -> data = (int*)malloc(sizeof(int)*size);
	q -> front = q ->rear = 0;
	q -> max = size;
	q -> count = 0;
}

int is_empty(Queue *q)
{
	return (q -> count == 0);
}

int get_rear(Queue *q)
{
	if(is_empty(q))
	{
		return -1;
	}
	return (q->data[q->rear]);
}

int get_front(Queue *q)
{
	if(is_empty(q))
	{
		return -1;
	}
	return (q->data[(q->front+1)%q->max]);
}

void add_rear(Queue *q, int d)
{
	q -> rear = (q -> rear + 1) % q -> max;
	
	q -> data[q -> rear] = d;
	q -> count++;
}

void add_front(Queue *q, int d)
{
	q -> data[q -> front] = d;
	
	q -> front = (q -> front - 1 + q -> max) % q -> max;
	q -> count++;
}

int pop_front(Queue *q)
{
	if(is_empty(q))
	{
		return -1;
	}
	int tmp = get_front(q);
	q -> front = (q -> front + 1) % q -> max;
	q -> count--;
	return tmp;
}

int pop_rear(Queue *q)
{
	if(is_empty(q))
	{
		return -1;
	}
	int tmp = q -> data[q -> rear];
	q -> rear = (q -> rear - 1 + q -> max) % q -> max;
	q -> count--;
	return tmp;
}



int main(void)
{
	int N;
	scanf("%d",&N);
	char a[15];
	int num;
	Queue q;
	init_Queue(&q,N);
	for(int i = 0; i < N; i++)
	{
		scanf("%s",a);
		
		if(!strcmp(a,"push_back")){
			scanf("%d",&num);
			add_rear(&q,num);
		}
		else if(!strcmp(a,"push_front")){
			scanf("%d",&num);
			add_front(&q,num);
		}
		else if(!strcmp(a,"pop_front")){
			num = pop_front(&q);
			printf("%d\n",num);
		}
		else if(!strcmp(a,"pop_back")){
			num = pop_rear(&q);
			printf("%d\n",num);
		}
		else if(!strcmp(a,"size")){
			num = q.count;
			printf("%d\n",num);
		}
		else if(!strcmp(a,"empty")){
			num = is_empty(&q);
			printf("%d\n",num);
		}
		else if(!strcmp(a,"front")){
			num = get_front(&q);
			printf("%d\n",num);
		}
		else if(!strcmp(a,"back")){
			num = get_rear(&q);
			printf("%d\n",num);
		}
	}
}