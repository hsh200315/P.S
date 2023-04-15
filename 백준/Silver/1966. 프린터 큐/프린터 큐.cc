#include <stdio.h>
#include <stdlib.h>
 
int Queue[300];
int front ,rear;

int is_empty(){
	if(front == rear)
		return 1;
	else
		return 0;
}

int push(int a){
	Queue[++rear] = a;
	return 1;
}

int pop(){
	if(is_empty())
		return -1;
	else
		return Queue[front++];
}

int main(void)
{
	int count;
	int times;
	scanf("%d",&times);
	for(int i = 0; i < times; i++){
		int N, K;
		front = 0, rear = -1;
		scanf("%d %d",&N,&K);
		for(int j = 0; j < N; j++){
			scanf("%d",&Queue[j]);
			rear++;
		}
		count = 0;
		while(1){
			int max = -1;
			for(int j = front; j <= rear; j++){
				if(Queue[j] > max)
					max = Queue[j];
			}
			if(Queue[front] == max){
				if(K == front){
					count++;
					break;
				}
				pop();
				count++;
			}
			else{
				int k;
				if(K == front){
					k = pop();
					push(k);
					K = rear;
				}
				else{
					k = pop();
					push(k);
				}
			}
		}
		printf("%d\n",count);
	}
}