#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int K, N;
	scanf("%d %d",&K,&N);
	int arr[K], max = 0;
	for(int i = 0; i < K; i++){
		scanf("%d",&arr[i]);
		if(max < arr[i])
			max = arr[i];
	}
	long long length = 0;
	long long high = max;
	long low = 1;
	while(high >= low){
		long long count = 0;
		long long mid = (high + low)/2;
		for(int i = 0; i < K; i++){
			count += arr[i]/mid;
		}
		if(count >= N){
			if(length < mid)
				length = mid;
			low = mid + 1;
		}
		else
			high = mid - 1;
	}
	printf("%lld\n",length);
}