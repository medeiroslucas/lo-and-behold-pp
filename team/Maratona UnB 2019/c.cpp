#include<bits/stdc++.h>

using namespace std;


int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	map<char, int> mp;
	int cont=0;
	char aux=0;
	for(int i=0; i<s.size(); i++){
		if(s[i] == aux) cont++;
		else{
			mp[aux] = max(mp[aux], cont);
			
			aux=s[i];
			cont=1;
		}
	}
	mp[aux] = max(mp[aux], cont);
	int ans=0;
	for(auto it:mp){
		ans+=it.second;
	}

	cout << ans << endl;

	return 0;
}
