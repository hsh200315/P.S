#include <stdio.h>
#include <stdlib.h>

long long DP[100];

int main(){
	int times;
	scanf("%d",&times);
	long long a;
	DP[0] = 1;
	DP[1] = 1;
	DP[2] = 1;
	DP[3] = 2;
	DP[4] = 2;
	DP[5] = 3;
	DP[6] = 4;
	DP[7] = 5;
	DP[8] = 7;
	for(int i = 9; i < 100; i++){
		DP[i] = DP[i-1] + DP[i-5];
	}
	for(int i = 0; i < times; i++){
		scanf("%lld",&a);
		printf("%lld\n",DP[a-1]);
	}
}