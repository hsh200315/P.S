#include <iostream>
using namespace std;

int main(){
	int arr[10001] = {0,};
	int sum = 0,object,copy;
	for(int i=1; i<10000; i++){
		sum += i;
		if(i>=10){
			copy = i;
			while(copy > 0){
				object = copy%10;
				sum += object;
				copy /= 10;
			}
			if(sum < 10001){
				arr[sum] = 1;
			}
			sum = 0;
		}
		else{
			sum += i;
			arr[sum] = 1;
			sum = 0;
		}
	}
	for(int j = 1; j<10001; j++){
		if(arr[j] == 0){
			cout << j << endl;
		}
	}
}