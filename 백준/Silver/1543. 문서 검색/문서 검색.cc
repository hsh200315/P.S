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

	string space, pattern;
	getline(cin,space);
	getline(cin,pattern);
	int length = pattern.length();
	int count = 0;
	for(int i = 0; i < space.length(); i++){
		if(space.substr(i,length) == pattern){
			count++;
			i += length-1;
		}
	}
	cout << count << "\n";
}