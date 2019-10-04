#include<bits/stdc++.h>

using namespace std;

int main(){

	int gcd, nums[1005][1005];

	int n;

	cin >> n;

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> nums[i][j];
		}
	}

	for(int i=0; i<n; i++){
		gcd = 0;
		for(int j=0; j<n; j++){
			gcd = __gcd(gcd, nums[i][j]);
		}
		if(i) cout << " ";
		cout << gcd;
	}

	cout << endl;

	return 0;
}
