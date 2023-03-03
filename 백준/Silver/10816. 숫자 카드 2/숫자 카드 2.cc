#include <stdio.h>
#include <stdlib.h>
// 10816

int compare(const void* first, const void* second)
{
	if(*(int*)first < *(int*)second)
		return -1;
	else if(*(int*)first > *(int*)second)
		return 1;
	else
		return 0;
}

int upper_bound(int a[], int size, int k)
{
	int high = size - 1;
	int low = 0;
	int mid;
	while(high-low > 0)
	{
		mid = (high + low)/2;
		
		if(a[mid] <= k)
		{
			low = mid + 1;
		}
		else
			high = mid;
	}
	if(a[high] == k)
		return high + 1;
	return high;
}

int lower_bound(int a[], int size, int k)
{
	int high = size - 1;
	int low = 0;
	int mid;
	while(high-low > 0)
	{
		mid = (high + low)/2;
		if(a[mid] < k)
		{
			low = mid + 1;
		}
		else
			high = mid;
	}
	return high;
	
}

int main(void)
{
	int N;
	scanf("%d",&N);
	
	int* card = (int*)malloc(sizeof(int)*N);
	for(int i = 0; i < N; i++)
	{
		scanf("%d",&card[i]);
	}
	qsort(card,N,sizeof(int),compare);
	int M;
	scanf("%d",&M);
	int num;
	int a,b;
	for(int i = 0; i < M; i++)
	{
		scanf("%d",&num);
		a = upper_bound(card,N,num);
		b = lower_bound(card,N,num);
		printf("%d\n",a-b);
	}
	
}