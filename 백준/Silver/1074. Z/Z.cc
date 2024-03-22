#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

#1074
using namespace std;

int co = 0;
int N, r, c;

void solve(int x, int y, int size){
	if(y == r && x == c){
		cout << co << '\n';
		return;
	}

	if(r < y + size && r >= y && c < x+size && c >= x){
		solve(x, y, size/2);
		solve(x+size/2,y,size/2);
		solve(x,y+size/2,size/2);
		solve(x+size/2,y+size/2,size/2);
	}
	else{
		co += size*size;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	
	cin >> N >> r >> c;
	solve(0,0,(1<<N));
}