#include <iostream>
#include <queue>
#include <vector>
#include <string>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int a[3];
    int b[3];
    int c[3];
    int result;

    for(int i = 0; i < 3; i++){
        cin >> a[i];
    }
    for(int i  = 0; i < 3; i++){
        cin >> c[i];
    }
    b[0] = c[0]-a[2];
    b[1] = c[1]/a[1];
    b[2] = c[2]-a[0];

    for(int i =0; i < 3; i++){
        cout << b[i] << " ";
    }
}