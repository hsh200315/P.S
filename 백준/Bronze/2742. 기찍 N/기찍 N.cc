#include <iostream>

using namespace std;

int main(){
	int a;
	cin >> a;
	if(a <= 100000){
		for(int i=a; i>0;i--){
			cout << i << "\n";
		}
	}
	return 0;
}	