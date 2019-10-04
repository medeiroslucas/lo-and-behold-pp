#include<bits/stdc++.h>

using namespace std;

int main(){

	int n, m;
	long long int sum, aux;

	cin >> n;

	while(n--){
		cin >> m;
		sum = 0;
		for(int i=0; i<m; i++){
			cin >> aux;
			sum += aux;
		}
		cout << (long long int)ceil((double)sum/(double)m) << endl;
	}


	return 0;
}
