#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	
	cin >> n >> m;
	vector<int> a;
	for(int i=0;i<n;i++){
		int teste=0;
		cin >> teste;
		a.push_back(teste);
	}
	
	sort(a.begin(),a.end());
	reverse(a.begin(),a.end());
	int j=m;
	
	for(j=m;j<n;j++){
		if(a[j]!=a[m-1]) break; 
	}
	
	
	
	cout << j << endl;
	
	
	
	return 0;
}

