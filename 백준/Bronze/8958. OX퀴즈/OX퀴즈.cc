#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int count;
	cin >> count;
	char ox[80];
	int sum=0,score=0;
	for(int i=0; i<count; i++){
		cin >> ox;
		for(int k = 0 ; k<strlen(ox); k++){
			if(ox[k] == 'O'){
				score += 1;
			}
			else if(ox[k] == 'X'){
				score = 0;
			}
			sum += score;
		}
		cout << sum << endl;;
		score = 0;
		sum = 0;
		ox[0] = '\0';
	}
}