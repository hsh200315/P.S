#include <iostream>
#include <string>
using namespace std;

int main(){
	string input;
	getline(cin,input);
	int count = 1;
	int length = input.length();
	for(int i=1; i<length; i++){
		if(input[i] == ' '){
			count += 1;
		}
	}
	if(input[length-1] == ' '){
		count -= 1;
	}
	cout << count;
}