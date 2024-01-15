#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;
 
int main(){
	string ex;
	bool check = false;
	string num ="";
	int sum = 0;
	
	cin >> ex;
	
	for(int i = 0; i <= ex.size(); i++){
		if (ex[i] == '-' || ex[i] == '+' || i == ex.size()) {  
			if (check == true) {    
				sum -= stoi(num);    
				num = "";                    
			}
			else if (check == false) {
				sum += stoi(num);
				num = "";
			}
		}
		else {
			num += ex[i]; 
		}
		if (ex[i] == '-') {
			check = true;
		}
	}
	cout << sum;
}
