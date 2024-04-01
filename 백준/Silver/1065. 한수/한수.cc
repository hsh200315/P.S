#include <iostream>
using namespace std;

int main(){
	int arr[1001] = {0,};
	for(int i = 1; i<100; i++){
		arr[i] = 1;
	}
	int a,b,c,gap;
	for(int i = 100 ; i<1000; i++){
		a = i/100;
		b = i%100/10;
		c = i%10;
		gap = a-b;
		if(gap == b-c){
			arr[i] = 1;
		}
	}
	int num;
	int count =0;
	cin >> num;
	for(int j = 1; j<num+1; j++){
		if(arr[j] == 1){
			count++;
		}
	}
	cout << count << endl;
}