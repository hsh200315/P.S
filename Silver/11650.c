#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int N;
	scanf("%d",&N);
	
	//2차원 배열 할당
	int **arr = (int**)malloc(sizeof(int*)*N);
	for(int i = 0; i < N; i++)
	{
		arr[i] = (int*)malloc(sizeof(int)*(N+1));
	}
	for(int i = 0; i < N; i ++){
		printf("%ld\n",sizeof(arr[i])/sizeof(int*));
	}
	// N x N matrix 입력
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	int k;
	scanf("%d",&k);
	
	// search algorithm
	
	low = 0, high = N - 1;
	while(low <= high)
	{
		mid = (low+high)/2;
		if(arr[mid] == k)
		{
			printf("")
		}
	}
}