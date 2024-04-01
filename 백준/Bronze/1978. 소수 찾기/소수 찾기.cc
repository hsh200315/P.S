#include <iostream>
using namespace std;

int main(){
	int times;
	cin >> times;
	int arr[1000];
	for(int i=0; i< times; i++){
		cin >> arr[i];
	}
	int count = times;
	for(int i=0; i<times;i++){
		if(arr[i] == 1){
			count--;
			continue;
		}
		for(int j=2; j<arr[i];j++){
			if(arr[i]%j == 0){
				count--;
				break;
			}
		}
	}
	cout << count;
}