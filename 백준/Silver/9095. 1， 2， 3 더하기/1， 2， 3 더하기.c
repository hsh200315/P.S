#include <stdio.h>
#include <stdlib.h>

int DP[11];

int main(){
	int times;
	scanf("%d",&times);
	int a;
	DP[0] = 1;
	DP[1] = 2;
	DP[2] = 4;
	for(int i = 3; i < 11; i++){
		DP[i] = DP[i-1] + DP[i-2] + DP[i-3];
	}
	for(int i = 0; i < times; i++){
		scanf("%d",&a);
		printf("%d\n",DP[a-1]);
	}
}