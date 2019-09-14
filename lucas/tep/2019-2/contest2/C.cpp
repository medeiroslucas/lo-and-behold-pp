#include<bits/stdc++.h>

using namespace std;

int main(){

	int n;
	string s, ans="", aux="";

	cin >> n;

	cin >> s;

	bool left;
	if(n & 1){
		left=false;
	}else{
		left=true;
	}
	for(auto c:s){
		if(left){
			ans = c+ans;
		}else{
			ans = ans+c;
		}
		left = !left;
	}

	cout << ans << endl;

	return 0;
}
