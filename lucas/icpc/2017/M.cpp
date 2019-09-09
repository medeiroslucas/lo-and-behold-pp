#include<bits/stdc++.h>

using namespace std;

int main(){

	int a, b, c, ans=1000000;

	cin >> a >> b >> c;

	ans = min(ans, (a*0 + b*2 + c*4));

	ans = min(ans, (a*2 + b*0 + c*2));

	ans =min(ans, (a*4 + b*2 + c*0));

	cout << ans << endl;

	return 0;
}
