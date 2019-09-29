#include<bits/stdc++.h>

using namespace std;

int diff[11];
int ans=10000;
bitset<16> ans_b;

int main(){
	int n, m;
	cin >> n >> m;
	vector <string> s;
	bitset<16> bs;
	bs.reset();
	string temp;
	for(int i=0; i<n; i++){
		cin >> temp;
		s.push_back(temp);
	}
	for(int a=0; a<pow(4,m+1); a++){
		bs=a;
		memset(diff,0,sizeof(diff));
		for(int i=0;i<m;i++){
			char comp='0';
			if(bs[2*i]==0 && bs[2*i+1]==0) comp='A';
			if(bs[2*i]==1 && bs[2*i+1]==0) comp='C';
			if(bs[2*i]==0 && bs[2*i+1]==1) comp='T';
			if(bs[2*i]==1 && bs[2*i+1]==1) comp='G';
			
			for(int j=0;j<n;j++){
				if(comp!=s[j][i]) diff[j]++;
			}
	}
		int max_diff=0;
		for(int j=0;j<n;j++){
			max_diff=max(max_diff,diff[j]);
		}

		if(max_diff<ans){
			ans=max_diff;
			ans_b=bs;
		}
	}

	//cout << ans_b << endl;
	for(int i=0;i<m;i++){
			if(ans_b[2*i]==0 && ans_b[2*i+1]==0) cout << 'A';
			if(ans_b[2*i]==1 && ans_b[2*i+1]==0) cout << 'C';
			if(ans_b[2*i]==0 && ans_b[2*i+1]==1) cout << 'T';
			if(ans_b[2*i]==1 && ans_b[2*i+1]==1) cout << 'G';

	}
	cout << endl;

	cout << ans << endl;
	return 0;
}
