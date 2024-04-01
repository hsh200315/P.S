#include <iostream>

using namespace std;

int main(){
	int times,a,b;
	cin >> times;
	for(int i=1; i<=times;i++){
		cin >> a >> b;
		cout << "Case #" << i << ": " << a+b << "\n";
	}
	return 0;
}	