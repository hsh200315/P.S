#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int count;
	cin >> count;
	int arr[1000];
	int num;
	int sum = 0, avg = 0, co = 0;
	for(int i=0; i<count ; i++){
		cin >>num;
		for(int j=0;j<num; j++){
			cin >> arr[j];
			sum += arr[j];
		}
		avg = sum/num;
		sum = 0;
		for(int j = 0; j<num; j++){
			if(avg < arr[j]){
				co += 1;
			}
		}
		double result = (double)co/num*100;
		co = 0;
		printf("%.3f%\n",result);
	}
}