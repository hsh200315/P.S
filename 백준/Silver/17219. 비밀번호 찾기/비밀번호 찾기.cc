#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pass{
	char site[21];
	char password[21];
}Pass;

int compare(const void* a, const void* b){
	
	Pass* first = (Pass*)a;
	Pass* second = (Pass*)b;
	
	if(strcmp(first->site,second->site) > 0)
		return 1;
	else
		return -1;
}

int main(void)
{
	int N, M;
	scanf("%d %d",&N,&M);
	char na[21],na2[21];
	Pass arr[N];
	for(int i = 0; i < N; i++){
		scanf("%s %s",na,na2);
		strcpy(arr[i].site,na);
		strcpy(arr[i].password,na2);
	}
	qsort(arr,N,sizeof(arr[0]),compare);
	for(int i = 0; i < M; i++){
		scanf("%s",na);
		int high = N - 1, low = 0,mid;
		while(low <= high){
			mid = (low+high)/2;
			if(strcmp(arr[mid].site,na) == 0){
				printf("%s\n",arr[mid].password);
				break;
			}
			else if(strcmp(arr[mid].site,na) > 0)
				high = mid - 1;
			else
				low = mid + 1;
		}
	}
}