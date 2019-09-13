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

	ll a, b, c, d, ans, q1;
	set<ll> div;

	cin >> a >> b >> c >> d;

	if(c%a != 0 ){
		cout << "-1" << endl;
		return 0;
	}

	q1 = c/a;

	for(int i=1; i<=sqrt(q1); i++){
		if(q1%i == 0){
			div.insert(i);
			div.insert(q1/i);
		}
	}

	for(auto aux:div){
		ans = a*aux;
		if(ans%b != 0 && d%ans != 0){
			cout << ans << endl;
			return 0;
		}	
	}

	cout << "-1" << endl;

	return 0;
}
