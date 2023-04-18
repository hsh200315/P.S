#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b){
	return strcmp((char*)a, (char*)b);
}

int binarysearch(char arr[][21], int size, char* key){
	int high,low,mid;
	high = size - 1;
	low = 0;
	while(low <= high){
		mid = (low+high)/2;
		if(strcmp(arr[mid],key) == 0){
			
			return mid;
		}
		else if(strcmp(arr[mid],key) > 0){
			high = mid - 1;
		}
			
		
		else{
			low = mid + 1;
		}
	}
	return - 1;
}

int main(void)
{
	int N, M;
	scanf("%d %d",&N,&M);
	char listen[N][21];
	char listenwatch[M][21];
	
	for(int i = 0; i < N; i++){
		scanf("%s",listen[i]);
	}
	qsort(listen,N,sizeof(listen[0]),compare);
	char str[21];
	int a;
	int count = 0;
	for(int i = 0; i < M; i++){
		scanf("%s",str);
		a = binarysearch(listen,N,str);
		if(a == -1)
			continue;
		else{
			strcpy(listenwatch[count++],str);
		}
	}
	qsort(listenwatch,count,sizeof(listenwatch[0]),compare);
	printf("%d\n",count);
	for(int i = 0; i < count; i++){
		printf("%s\n",listenwatch[i]);
	}
}