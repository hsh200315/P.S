#include <iostream>
using namespace std;

int main(){
	
	int times;
	cin >> times;
	int h,w,number;
	int resulth,resultw;
	for(int i=0; i<times; i++){
		cin >> h >> w >> number;
		resulth = number%h;
		resultw = number/h;
		if(resulth == 0){
			resulth = h;
		}
		else{
			resultw+= 1;
		}
		cout << resulth*100+resultw << endl;
	}
}