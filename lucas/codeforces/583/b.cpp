#include<bits/stdc++.h>

using namespace std;

int main(){

	int b, g, n, ans=0;

	cin >> b >> g >> n;

	for(int i=0; i<=n; i++){
		if(b>=i && g>=(n-i)){
			ans++;
		}
	}

	cout << ans << endl;

	return 0;
}
