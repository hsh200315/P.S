#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  int age;
  char name[101];
}Node;

int cmp(const void* first,const void* second)
{
	Node *ptfirst = (Node*)first;
 	Node *ptsecond = (Node*)second;

  	if(ptfirst -> age < ptsecond -> age)
    	return -1;
  	else if(ptfirst -> age > ptsecond -> age)
    	return 1;
  	else
    	return 0;
}

int main(void)
{
  	int num;
  	scanf("%d",&num);

  	Node *arr = (Node*)malloc(sizeof(Node)*num);
  	for(int i = 0; i < num; i++)
  	{
  	  scanf("%d %s",&arr[i].age,arr[i].name);
  	}
	
 	 qsort(arr,num,sizeof(Node),cmp);
 	 for(int i = 0; i < num; i++)
 	 {
 	   printf("%d %s\n",arr[i].age,arr[i].name);
  	}

 	 return 0;
}