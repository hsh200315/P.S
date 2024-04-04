#include <iostream>
#include <queue>
#include <algorithm>
#include <string>
#include <utility>
#include <vector>

using namespace std;

int gcd(int a, int b){
	if(b==0)
			return a;
	return gcd(b, a % b);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
    cin >> T;
    for (int t = 0; t < T; t++){
        int m, n, x, y;
        int result = -1;
        cin >> m >> n >> x >> y;
        int maxi = m*n/gcd(m,n);
        for (int i = x; i <= maxi; i+=m){
            int ny = i % n; 
            if(ny == 0)
                ny = n;
            
            if(ny == y){ 
                result = i;
                break;
            }
        }
        cout << result << '\n';
    }
    return 0;
	
}