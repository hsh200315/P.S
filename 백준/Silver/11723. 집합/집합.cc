#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void)
{
	int arr[20] = {0,};
	int N;
	char str[10] = {};
	int tmp;
	scanf("%d",&N);
	for(int i = 0; i < N; i++){
		scanf("%s",str);
		scanf("%d",&tmp);
		if(!strcmp(str, "add"))
			arr[tmp-1] = 1;
		else if(!strcmp(str, "remove"))
			arr[tmp-1] = 0;
		else if(!strcmp(str, "check")){
			if(arr[tmp-1] == 1)
				printf("1\n");
			else
				printf("0\n");
		}
		else if(!strcmp(str, "toggle")){
			if(arr[tmp-1] == 1)
				arr[tmp-1] = 0;
			else
				arr[tmp-1] = 1;
		}
		else if(!strcmp(str, "all")){
			for(int j = 0; j < 20; j++)
				arr[j] = 1;
		}
		else if(!strcmp(str, "empty")){
			for(int j = 0; j < 20; j++)
				arr[j] = 0;
		}
	}
}