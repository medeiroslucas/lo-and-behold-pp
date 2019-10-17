/*
 *	 author: lucas_medeiros - github.com/medeiroslucas
 *	   team: Lo and Behold ++
 *	created: 17-10-2019 11:36:19
 *	contest: 1236
 *	problem: B
 *	 solved: False
*/

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
const ll MOD = 1e9+7;

ll f(ll n){
	return ((n*(n+1))/2)%MOD;
}

template<typename T>
T mod_exp(T a, T b, T m){
    if(b == 0) return (T) 1;
    T c = mod_exp(a, b/2, m);
    c = (c*c)%m;
    if(b%2 != 0) c=(c*a)%m;
    return c;
}

int main(){
	ios_base::sync_with_stdio(false);	

	ll n, m;

	cin >> n >> m;

	auto f_n = f(n);
	auto f_n1 = f(n-1);
	auto f_n2 = f(n-2);

	auto fnem = mod_exp(f_n, m, MOD);
	auto fn_1em = mod_exp(f_n1, m, MOD);
	auto fn_2em = mod_exp(f_n2, m, MOD);

	auto ans = (fnem - (n*fn_1em - ((n-1)*fn_2em*(n*(n-1))/2) ));

	cout << ans << endl;

	return 0;
}
