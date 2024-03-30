#include <iostream>
#include <queue>
#include <algorithm>
#include <string>

using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arr[50] = {0, };
	int n;
	cin >> n;
	string str1, tmp;
	cin >> str1;
	for(int i = 1; i < n; i++){
		cin >> tmp;
		for(int j = 0; j < str1.length(); j++){
			if(str1[j] != tmp[j]){
				arr[j] = 1;
			}
		}
	}
	
	for(int i = 0; i < str1.length(); i++){
		if(arr[i] == 0){
			cout << str1[i];
		}
		else{
			cout << '?';
		}
	}
	return 0;
}