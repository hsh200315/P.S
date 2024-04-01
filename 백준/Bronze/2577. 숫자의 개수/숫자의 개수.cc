#include <iostream>

using namespace std;

int main(){
	int a,b,c,num;
	cin >> a;
	cin >> b;
	cin >> c;
	int arr[10] = {0,};
	int i;
	num = a*b*c;
	while(num>0){
		i = num%10;
		arr[i] += 1;
		num /= 10;
	}
	for(int i=0; i<10; i++){
		cout << arr[i] << endl;
	}
}	