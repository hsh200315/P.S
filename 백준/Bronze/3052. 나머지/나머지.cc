#include <iostream>
using namespace std;

int main(){
	int arr[42] = {0,};
	int a,b;
	for(int i=0; i<10; i++){
		cin >> a;
		b = a%42;
		arr[b] += 1;
	}
	int count =0;
	for(int k=0;k<42;k++ ){
		if(arr[k]>0){
			count += 1;
		}
	}
	cout << count;
}