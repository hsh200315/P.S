#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N;
	scanf("%d",&N);
	int save;
	int count = 0;
	for(int i = 666; ;i++){
		int temp = i;
		while(temp > 600){
			if(temp % 1000 == 666){
				count++;
				break;
			}
			temp /= 10;
		}
		if(count == N){
			save = i;
			break;
		}	
	}
	printf("%d\n",save);	
}