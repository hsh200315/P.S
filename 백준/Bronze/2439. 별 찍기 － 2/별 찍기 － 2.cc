#include <iostream>

using namespace std;

int main(){
	int times;
	cin >> times;
	for(int i=1; i<=times;i++){
		for(int k=0;k<times-i;k++){
			cout <<" ";
		}
		for(int j=0; j< i; j++){
			cout << "*";
		}
		cout <<endl;
	}
	return 0;
}	