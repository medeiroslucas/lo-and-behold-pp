#include <bits/stdc++.h>

#define DEBUG false
#define coutd if(DEBUG) cout
#define debugf if(DEBUG) printf
#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define sz size()

using namespace std;

using ll = long long;
using ii = pair<int, int>;
using vi = vector<int>;
const double PI = acos(-1);
const double EPS = 1e-9;

int main(){
	ios_base::sync_with_stdio(false);	

	ll n, b, i;

	cin >> n >> b;

	if(b<=n){
		cout << "0 " << b << endl;
		return 0;
	}

	cout << b << "-" << n << endl;
	b -= n;

	for(i=1; b>=n-i; i++){
		cout << b << "-" << (n-i) << endl;
		b -= (n-i);
		if(b >= n-i){
			cout << b << "-" << (n-i) << endl;
			b -= (n-i);
		}
	}

	cout << b << " " << i << endl;

	return 0;
}
