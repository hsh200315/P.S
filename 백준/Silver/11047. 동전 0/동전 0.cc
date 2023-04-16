#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int N;
	long long money;
	int arr[10];
	scanf("%d %lld",&N,&money);
	for(int i = 0; i < N; i++){
		scanf("%d",&arr[i]);
	}
	long long count = 0;
	while(money != 0){
		for(int i = N-1; i >= 0; i--){
			if(arr[i] <= money){
				money -= arr[i];
				count++;
				break;
			}
				
		}
	}
	printf("%lld\n",count);
}