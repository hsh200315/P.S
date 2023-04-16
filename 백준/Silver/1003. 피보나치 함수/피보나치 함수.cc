#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N;
	scanf("%d",&N);
	int zerocount = 1,onecount = 1;
	for(int i = 0; i < N; i++){
		int n;
		scanf("%d",&n);
		zerocount = 0;
		onecount = 1;
		if(n == 0)
			printf("1 0\n");
		else if(n == 1)
			printf("0 1\n");
		else{
			for(int j = 1; j < n; j++){
				int tmp = onecount;
				onecount = onecount + zerocount;
				zerocount = tmp;
			}
			printf("%d %d\n",zerocount,onecount);
		}
	}
}