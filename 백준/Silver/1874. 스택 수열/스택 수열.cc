#include <stdio.h>
#include <stdlib.h>

int stack[100000];
int top = -1;

char stack2[200000];
int top2 = -1;
 
void push(int a){
	stack[++top] = a;
}
int pop(){
	return stack[top--];
}
int peek(){
	return stack[top];
}

void push2(char a){
	stack2[++top2] = a;
}
char pop2(){
	return stack2[top2--];
}
int check;
int main(void)
{
	int times;
	int p = 1;
	int a;
	scanf("%d",&times);
	check = 0;
	for(int i = 0; i < times; i++){
		int k;
		scanf("%d",&k);
		while(1){
			if(p <= k){
				push2('+');
				push(p);
				p++;
			}
			else if(peek() == k){
				push2('-');
				a = pop();
				break;
			}
			else if(peek() > k){
				push2('-');
				a = pop();
			}
			else{
				check = 1;
				break;
			}
		}	
	}
	if(check == 1)
		printf("NO\n");
	else{
		int w = top2;
		for(int i = 0; i <= w; i++){
			printf("%c\n",stack2[i]);
		}
	}
}