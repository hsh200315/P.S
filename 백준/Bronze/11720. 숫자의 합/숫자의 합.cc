#include <iostream>
#include <string>
using namespace std;

int main(){
	int times;
	cin >> times;
	string arr;
	cin >> arr;
	int sum = 0;
	int b;
	for(int i=0; i<times; i++){
		b = arr[i] - 48;
		sum += b;
	}
	cout << sum;
}