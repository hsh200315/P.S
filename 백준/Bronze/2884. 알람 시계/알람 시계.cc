#include <iostream>

using namespace std;

int main(){
	int a,b,min;
	cin >> a;
	cin >> b;
	if(b>=45){
		b = b-45;
		cout << a << " " << b;
	}
	else{
		if(a==0){
			a = 23;
			min = b -45;
			b = 60 + min;
			cout << a << " " << b;
		}
		else{
			a-=1;
			min = b -45;
			b = 60 + min;
			cout << a << " " << b;
		}
	}
}