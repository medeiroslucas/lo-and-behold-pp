#include<bits/stdc++.h>

using namespace std;

int main(){

	long long int n, max_num=-1, cont=0;

	cin >> n;

	vector<long long int> num(n);

	for(long long int i=0; i<n; i++){
		cin >> num[i];
		max_num = max(max_num, num[i]);
	}

	long long int gcd = 0;

	for(long long int i=0; i<n; i++){
		gcd = __gcd(gcd, max_num-num[i]);
	}

	for(long long int i=0; i<n; i++){
		cont += (max_num-num[i])/gcd;
	}

	cout << cont << ' ' << gcd << endl;

	return 0;
}
