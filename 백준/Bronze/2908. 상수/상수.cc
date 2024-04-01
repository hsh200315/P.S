#include <iostream>
#include <string>
using namespace std;

int main(){
	string str1, str2;
	cin >> str1;
	cin >> str2;
	char temp;
	temp= str1[0];
	str1[0] = str1[2];
	str1[2] = temp;
	temp = str2[0];
	str2[0] = str2[2];
	str2[2] = temp;
	
	if(stoi(str1)>stoi(str2)){
		cout << str1;
	}
	else{
		cout << str2;
	}
}