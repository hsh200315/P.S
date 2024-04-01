#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  int X;
  int Y;
}Node;

int cmpX(const void* first,const void* second)
{
	Node *ptfirst = (Node*)first;
 	Node *ptsecond = (Node*)second;

  	if(ptfirst -> X < ptsecond -> X)
    	return -1;
  	else if(ptfirst -> X > ptsecond -> X)
    	return 1;
  	else
    	return 0;
}
int cmpY(const void* first,const void* second)
{
	Node *ptfirst = (Node*)first;
 	Node *ptsecond = (Node*)second;

  	if(ptfirst -> Y < ptsecond -> Y)
    	return -1;
  	else if(ptfirst -> Y > ptsecond -> Y)
    	return 1;
  	else
    	return 0;
}



int main(void)
{
  	int num;
  	scanf("%d",&num);

  	Node *arr = (Node*)malloc(sizeof(Node)*num);
	
	// X 정렬
  	for(int i = 0; i < num; i++)
  	{
  	  scanf("%d %d",&arr[i].X,&arr[i].Y);
  	}
 	qsort(arr,num,sizeof(Node),cmpX);
 	
	// 같은 것끼리 Y 정렬
	int front = 0, rear = 0;
	while(rear <= num-1)
	{
		if(arr[front].X != arr[rear].X)
		{
			qsort(arr+front,rear-front,sizeof(Node),cmpY);
			front = rear;
		}
		if(arr[front].X == arr[rear].X)
		{
			rear++;
		}
	}
	qsort(arr+front,rear-front,sizeof(Node),cmpY);
	
	// 출력
	for(int i = 0; i < num; i++)
 	{
 	   printf("%d %d\n",arr[i].X,arr[i].Y);
  	}

 	 return 0;
}