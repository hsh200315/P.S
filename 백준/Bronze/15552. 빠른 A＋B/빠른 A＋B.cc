#include <iostream>

using namespace std;

int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int times,a,b;
	cin >> times;
	for(int i=0; i<times;i++){
		cin >> a >> b;
		cout << a+b << "\n";
	}
}	