#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 10845

int main(void)
{
	int num;
	scanf("%d",&num);
	
	int q[10000];
	int front = 0;
	int rear = 0;
	char input[10];
	int a;
	for(int i = 0; i < num; i++)
	{
		scanf("%s",input);
		if(!strcmp(input,"push"))
		{
			scanf("%d",&a);
			q[rear++] = a;
			continue;
		}
		else if(!strcmp(input,"pop"))
		{
			if(rear == front){
				printf("-1\n");
				continue;
			}
			printf("%d\n",q[front++]);
			continue;
		}
		else if(!strcmp(input,"size"))
		{
			printf("%d\n",rear - front);
			continue;
		}
		else if(!strcmp(input,"empty"))
		{
			
			printf("%d\n",rear == front);
			continue;
		}
		else if(!strcmp(input,"front"))
		{
			if(rear == front){
				printf("-1\n");
				continue;
			}
			printf("%d\n",q[front]);
			continue;
		}
		else if(!strcmp(input,"back"))
		{
			if(rear == front){
				printf("-1\n");
				continue;
			}
			printf("%d\n", q[rear-1]);
			continue;
		}
	}
}