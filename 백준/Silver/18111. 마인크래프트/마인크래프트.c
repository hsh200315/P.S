#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	long long M,N,B;
	int arr[500][500];
	scanf("%lld %lld %lld",&M,&N,&B);
	int max = -1;
	long long mintime;
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			scanf("%d",&arr[i][j]);
			if(max < arr[i][j])
				max = arr[i][j];
			mintime += 2*arr[i][j];
		}
	}
	int height = max;
	long long fulfill = 0;
	int maxheight = 0;
	long long time = 0;
	long long tmp;
	for(int q = height; q >=0; q--){
		fulfill = 0;
		tmp = B;
		time = 0;
		for(int i = 0; i < M; i++){
			for(int j = 0; j < N; j++){
				if(q >= arr[i][j])
					fulfill += q - arr[i][j];
				if(q < arr[i][j])
					tmp += arr[i][j] - q;
			}
		}
		if(fulfill > tmp){
			continue;
		}
		else{
			for(int i = 0; i < M; i++){
				for(int j = 0; j < N; j++){
					if(arr[i][j] < q){
						time += (q - arr[i][j]);
					}
					if(arr[i][j] > q){
						time += 2*(arr[i][j] - q);
					}
				}
			}
			if(mintime > time){
				mintime = time;
				maxheight = q;
			}
				
		}
	}
	printf("%lld %d\n",mintime,maxheight);
}