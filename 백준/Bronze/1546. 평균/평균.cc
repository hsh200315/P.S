#include <iostream>
using namespace std;

int main(){
	cout.precision(6);
	int count;
	cin >> count;
	double arr[count];
	double a;
	for(int i=0; i<count ; i++){
		cin >> a; 
		arr[i] = a;
	}
	double sum = 0, max = 0;
	for(int i=0; i<count; i++){
		if(max < arr[i]){
			max = arr[i];
		}
		sum += arr[i];
	}
	double result = sum/max*100/count;
	cout << result;
}