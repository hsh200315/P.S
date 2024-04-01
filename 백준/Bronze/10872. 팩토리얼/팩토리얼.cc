#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a;
    b = 1;
    if(a==0){
        cout << "1";
    }
    else{
        for(int i=a;i>0;i--){
            b *= i;
        }
        cout << b;
    }
}