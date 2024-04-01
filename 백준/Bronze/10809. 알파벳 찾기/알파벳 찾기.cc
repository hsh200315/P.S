#include <iostream>
#include <string>
using namespace std;

//a is 97
int main(){
	int a;
	int arr[26];
	for(int i=0;i<26;i++){
		arr[i] = -1;
	}
	string input;
	
	
	cin >> input;
	int length = input.length();
	int b;
	for(int i=0; i<length;i++){
		b = input[i] - 97;
		if(arr[b] == -1){
			arr[b] = i;
		}
	}
	for(int j =0 ; j<26; j++){
		cout << arr[j] << " ";
	}
}