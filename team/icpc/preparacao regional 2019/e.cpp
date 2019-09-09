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
vi perfeitos;

vi perf(){
	ll start=0;
	vi v;
	while(start<sqrt(1e9+599)){
		v.pb(start*start);
		start++;
	}
	return v;
}

int main(){
	ios_base::sync_with_stdio(false);	
	perfeitos = perf();
	int n;
	cin >> n;
	ll l, r, res;
	while(n--){
		res=0;
		cin >> l >> r;
		ll laux = (ll) sqrt(l);
		ll raux = (ll) sqrt(r);
		ll cont = laux;
		while(perfeitos[cont+1] <= r){
//			cerr << "$" << perfeitos[cont] << endl;
//			cerr << "res=" << res << endl;
	//		cerr << "+" << ((perfeitos[cont+1]-l) * cont)%mod << endl;
			res+=((perfeitos[cont+1]-l) * cont)%mod;
			l=perfeitos[cont+1];
			cont++;
		}
		//cerr << "$$" << cont << endl;
	//	cerr << ((r-perfeitos[cont]+1)*(cont))%mod << endl;
		res+=((r-perfeitos[cont]+1)*(cont))%mod;

		cout << res%mod << endl;
	}
	return 0;
}
