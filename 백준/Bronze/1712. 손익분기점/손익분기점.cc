#include <iostream>
#include <string>
using namespace std;

int main(){
	long int fix,make,sell;
	cin >> fix >> make >> sell;
	int h;
	h = fix/(sell-make);
	if(make>=sell){
		cout << -1 ;
	}
	else{
		cout << h+1;
	}
	
}