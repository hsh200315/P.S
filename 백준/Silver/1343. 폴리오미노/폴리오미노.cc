#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<char> output;

	string input;
	cin >> input;

	int startdot = -1, enddot = -1;
	int length = 0;
	for(int i = 0; i < input.size(); i++){
		if(startdot == -1 && input[i] == 'X'){
			startdot = i;
		}
		if((startdot != -1 && input[i] == '.') || (startdot != -1 && i == input.size() - 1)){
			enddot = i-1;
			if(i == input.size() - 1 && input[i] != '.'){
				enddot = i;
			}
			length = enddot - startdot + 1;
			if(length%2){
				cout << "-1\n";
				return 0;
			}
			while(length > 0){
				if(length >= 4){
					for(int j = 0; j < 4; j++){
						output.push_back('A');
					}
					length -= 4;
				}
				else{
					for(int j = 0; j < 2; j++){
						output.push_back('B');
					}
					length -= 2;
				}
			}
			startdot = -1;
		}
		if(input[i] == '.'){
			output.push_back('.');
		}
	}
	for(int i = 0; i < output.size(); i++){
		cout << output[i];
	}
	cout << "\n";
}