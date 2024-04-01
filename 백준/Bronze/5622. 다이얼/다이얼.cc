#include <iostream>
#include <string>
using namespace std;

int main(){
	int alphabet[26] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
	string str;
	cin >> str;
	int length = str.length();
	int sum = 0;
	int a;
	for(int i=0;i<length; i++){
		a = str[i];
		if(a>=65 && a<=90){
			sum += alphabet[a-65];
		}
		else{
			sum += 11;
		}
	}
	cout << sum;
}