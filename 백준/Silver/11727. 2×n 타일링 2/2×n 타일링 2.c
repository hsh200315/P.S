#include <stdio.h>
#include <stdlib.h>

int main(){	
	int DP[1000];
	DP[0] = 1;
	DP[1] = 3;
	int q;
	scanf("%d",&q);
	for(int i = 2; i < q; i++){
		DP[i] = (DP[i-1] + DP[i-2]*2)%10007;
	}
	printf("%d\n",DP[q-1]);
}