#include <stdio.h>
#include <string.h>
 
char stack[100];
int top = -1;

int is_empty(){
	if(top < 0)
		return 1;
	else
		return 0;
}

void push(char a){
	stack[++top] = a;
}

int pop(){
	if(is_empty())
		return -1;
	else
		return stack[top--] == '\0' ;
}

char peek(){
	return stack[top];
}

int main(void)
{
	char str[101];
	while(1){
		top = -1;
		gets(str);
		if(strcmp(str,".") == 0){
			break;	
		}
		char tmp;
		for(int i = 0; i < 101; i++){
			if(str[i] == '.'){
				if(is_empty()){
					printf("yes\n");
				}
				else
					printf("no\n");
				break;
			}
			if(str[i] == '('){
				push('(');
			}
			else if(str[i] == '['){
				push('[');
			}
			else if(str[i] == ')'){
				tmp = peek();
				if(tmp != '('){
					printf("no\n");
					break;
				}
				else
					pop();
			}
			else if(str[i] == ']'){
				tmp = peek();
				if(tmp != '['){
					printf("no\n");
					break;
				}
				else
					pop();
			}
		}
	}
}