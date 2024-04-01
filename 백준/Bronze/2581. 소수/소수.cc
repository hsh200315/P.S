#include <iostream>
using namespace std;

int main(){
	int arr[10000];
	int a,b,tf;
	int count = 0;
	cin >> a;
	cin >> b;
	for(int i = a; i<=b; i++){
		tf =0;
        if(i == 1){
            continue;
        }
		for(int j=2;j<i;j++){
			if(i%j == 0){
				tf = 1;
				break;
			}
		}
		if(tf==0){
			arr[count] = i;
			count ++;
		}
		tf = 0;
	}
	int sum = 0;
	if(count ==0){
		cout << -1;
	}
	else{
		for(int q=0; q<count; q++){
			sum += arr[q];
		}
		cout << sum << endl;
		cout << arr[0];
	}
}