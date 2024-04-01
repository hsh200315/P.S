#include <iostream>
#include <string>
using namespace std;

int main(){
	int times;
	cin >> times;
	int copy = times;
	int alphabet[26] = {0,};
	string str;
	int length,a;
	for(int i=0; i<times; i++){
		cin >> str;
		length = str.length();
		for(int j=0; j<length;j++){
			if(j== 0){
				a = str[j];
				alphabet[a-97] = 1;
				continue;
			}
			else{
				a = str[j];
				if(alphabet[a-97] == 0){
					alphabet[a-97] = 1;
				}
				else if(alphabet[a-97] == 1 && str[j-1] != str[j]){
					copy -=1 ;
					break;
				}
			}
		}
		for(int k=0; k<26; k++){
			alphabet[k] = 0;
		}
	}
	cout << copy;
}