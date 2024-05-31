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

	int N, M, K;
	int arr1[100][100];
	int arr2[100][100];
	int result[100][100];

	cin >> N >> M;
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			cin >> arr1[i][j];
		}
	}

	cin >> M >> K;
	for(int i = 0; i < M; i++){
		for(int j = 0; j < K; j++){
			cin >> arr2[i][j];
		}
	}
	for(int i = 0; i < N; i++){
		for(int j = 0; j < K; j++){
			for (int k = 0; k < M; k++) {
				result[i][j] += arr1[i][k] * arr2[k][j];
			}
			cout << result[i][j] << " ";
		}
		cout << endl;
	}
}