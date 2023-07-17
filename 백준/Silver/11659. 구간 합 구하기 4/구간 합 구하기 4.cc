#include <stdio.h>
#include <stdlib.h>

int main(){	
	int numbers,times;
	scanf("%d %d",&numbers,&times);
	int* arr = (int*)malloc(sizeof(int)*numbers);
	for(int i = 0; i < numbers; i++){
		scanf("%d",&arr[i]);
	}
	int sum[100001];
	sum[0] = 0;
	for(int i = 1; i <= numbers; i++){
		sum[i] = sum[i-1] + arr[i-1];
	}
	int a,b,q;
	for(int i = 0; i < times; i++){
		scanf("%d %d",&a,&b);
		q = sum[b] - sum[a-1];
		printf("%d\n",q);
	}
	
}
