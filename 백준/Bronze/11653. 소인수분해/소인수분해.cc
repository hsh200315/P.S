#include <iostream>
using namespace std;

int main(){
	int num;
	cin >>num;
	int divide=2;
	while(num != 1){
		if(num%divide == 0){
			num/=divide;
			cout << divide << endl;
			divide = 2;
		}
		else{
			divide+= 1;
		}
	}
}