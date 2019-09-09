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
const int mod = 1e9+7;

int main(){
	ios_base::sync_with_stdio(false);	

	ll n, a, b, x, y;	
	cin >> n;

	while(n--){
	
		cin >> a >> b;
		ll gcd = __gcd(a, b);
		cout << (b/gcd)%mod << " " << (a/gcd)%mod << endl;
	}

	return 0;
}
