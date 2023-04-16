#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N;
	scanf("%d",&N);
	int count = 0;
	for(int i = N; i >0; i--){
		int tmp = i;
		while(1){
			if(tmp % 5 == 0){
				tmp /= 5;
				count++;
			}
			else
				break;
		}
	}
	printf("%d\n",count);
}