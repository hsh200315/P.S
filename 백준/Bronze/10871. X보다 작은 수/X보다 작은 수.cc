#include <iostream>

using namespace std;

int main(){
	int num,line,a;
	cin >> num >> line;
	for(int i =0 ; i<num; i++){
		cin >> a;
		if(line>a){
			cout << a << " ";
		}
	}
}	