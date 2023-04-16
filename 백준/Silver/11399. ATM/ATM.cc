#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b){
	
	if(*(int*)a > *(int*)b)
		return 1;
	if(*(int*)a < *(int*)b)
		return -1;
	else
		return 0;
}

int main(void)
{
	int N;
	scanf("%d",&N);
	int arr[N];
	for(int i = 0; i < N; i++){
		scanf("%d",&arr[i]);
	}
	qsort(arr,N,sizeof(int),compare);
	int time = 0;
	int sum = 0;
	for(int i = 0; i < N; i++){
		sum += arr[i]*(N-i);
	}
	printf("%d\n",sum);
}