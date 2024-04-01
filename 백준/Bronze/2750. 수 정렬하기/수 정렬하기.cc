#include <iostream>

using namespace std;

int main(){

	int lines;	cin >> lines;

	int a[1001];

	int smallest,z,smallestposition;

	for(int i=0; i<lines; i++){

		cin >> a[i];	

	}

	for(int i=0; i<lines-1; i++){

		smallest = a[i];

		z = a[i];

		smallestposition = i;

		for(int j=i+1;j<lines;j++){

			if(a[j]<smallest){

				smallest = a[j];

				smallestposition = j;

			}					

		}

		a[i] = smallest;

		a[smallestposition] = z;	

	}

	for(int i=0; i<lines;i++){

		cout << a[i] << endl;

	}	

}