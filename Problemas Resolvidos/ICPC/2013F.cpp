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

	ll n, sum=0, n_aux, ans=0;

	cin >> n;

	set<ll> pos;
	pos.insert(0);

	for(int i=0; i<n; i++){
		cin >> n_aux;
		sum+=n_aux;
		pos.insert(sum);
	}

	for(auto p:pos){
		if(p >= sum/3) break;
		if(pos.find(p+sum/3) != pos.end() && pos.find(p+(2*(sum/3))) != pos.end()) ans++;
	}

	cout << ans << endl;

	return 0;
}
