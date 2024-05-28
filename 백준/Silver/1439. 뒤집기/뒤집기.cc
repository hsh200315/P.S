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

	string input;
	cin >> input;

	int count = 0;
	for(int i = 0; i < input.length(); i++){
		if(input[i] != input[i+1]){
			count++;
		}
	}

	if(!count){
		cout << count << "\n";
	}
	else{
		cout << count/2 << "\n";
	}
}