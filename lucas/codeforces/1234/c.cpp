#include<bits/stdc++.h>

using namespace std;

int main(){

	int q, n;
	string s1, s2;
	int pipes[2][100005];
	map<char, int> m;

	m['1'] = 0;
	m['2'] = 0;
	m['3'] = 1;
	m['4'] = 1;
	m['5'] = 1;
	m['6'] = 1;

	cin >> q;

	while(q--){

		cin >> n >> s1 >> s2;

		for(int i=0; i<n; i++){
			pipes[0][i] = m[s1[i]];
		}
		for(int i=0; i<n; i++){
			pipes[1][i] = m[s2[i]];
		}

		int l=0, r=0;
		int pos=0;
		while(r<n){
			if(!pipes[l][r]){
				if(pos=0) r++;
				else break;
			}else{
				
			}
		}

	}


	return 0;
}
