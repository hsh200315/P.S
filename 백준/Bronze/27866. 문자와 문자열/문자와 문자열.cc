#include <stdio.h>

int main(){
	char input[1001];
	int index;
	
	scanf("%s",input);
	scanf("%d",&index);
	
	printf("%c",input[index-1]);
}