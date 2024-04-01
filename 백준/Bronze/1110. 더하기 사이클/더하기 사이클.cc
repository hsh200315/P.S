#include <iostream>

using namespace std;

int main(){
	int origin,count =0,num=-1;
	int first,second;
	cin >> origin;
	first = origin/10;
	second = origin%10;
	while(origin != num){
		count += 1;
		num = second*10 + (first + second)%10;
		first = num/10;
		second = num%10;
	}	
	cout << count;
}	