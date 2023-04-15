#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	long long N, M;
	scanf("%lld %lld",&N,&M);
	long long arr[N];
	long long sum = 0;
	for(int i = 0; i < N; i++){
		scanf("%lld",&arr[i]);
		if(sum < arr[i])
			sum = arr[i];
	}
	long long low, high, mid, height = 0;
	low = 1, high = sum;
	while(low <= high){
		sum = 0;
		mid = (low + high) / 2;
		for(int i = 0; i < N; i++){
			if(arr[i]- mid <= 0)
				continue;
			sum += arr[i] - mid;
		}
		if(sum >= M){
			if(height < mid)
				height = mid;
			low = mid + 1;
		}
		else
			high = mid -1;
	}
	printf("%lld\n",height);
}