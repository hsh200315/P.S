#include <iostream>
#include <string>
using namespace std;

//a is 97
int main(){
	int times;
	cin >> times;
	int num;
	string st,result = "";
	for(int i=0; i<times; i++){
		cin >> num;
		cin >> st;
		int length = st.length();
		for(int k=0 ;k<length;k++){
			for(int j=0;j<num;j++){
				result += st[k];
			}
		}
		cout << result << endl;
		result = "";
	}
}