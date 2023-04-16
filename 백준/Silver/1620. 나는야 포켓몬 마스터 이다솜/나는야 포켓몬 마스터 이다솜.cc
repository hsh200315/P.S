#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pokemon{
	int num;
	char name[21];
}Pokemon;

int compare(const void* a, const void* b){
	
	Pokemon* first = (Pokemon*)a;
	Pokemon* second = (Pokemon*)b;
	
	if(strcmp(first->name,second->name) > 0)
		return 1;
	else
		return -1;
}

int main(void)
{
	int N, M;
	scanf("%d %d",&N,&M);
	char na[21];
	Pokemon arr[N],arr2[N];
	for(int i = 0; i < N; i++){
		arr[i].num = i+1;
		scanf("%s",na);
		strcpy(arr[i].name,na);
		arr2[i] = arr[i]; 
	}
	qsort(arr2,N,sizeof(arr2[0]),compare);
	for(int i = 0; i < M; i++){
		scanf("%s",na);
		if(na[0] >= '0' && na[0] <= '9'){
			int q = atoi(na);
			printf("%s\n",arr[q-1].name);
		}
		else{
			int high = N - 1, low = 0,mid;
			while(low <= high){
				mid = (low+high)/2;
				if(strcmp(arr2[mid].name,na) == 0){
					printf("%d\n",arr2[mid].num);
					break;
				}
				else if(strcmp(arr2[mid].name,na) > 0)
					high = mid - 1;
				else
					low = mid + 1;
			}
		}
	}
}