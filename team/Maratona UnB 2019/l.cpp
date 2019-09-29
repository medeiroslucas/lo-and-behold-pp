#include<bits/stdc++.h>

using namespace std;

const int maxv=1e4+100;
const int maxn=1e3+100;

using ll = long long;

	ll k, n, a;
ll v[maxv];
ll w[maxv];
ll prefix[maxv];

	bool poss=true;
ll memo[maxv][maxn];

ll f(ll pos, ll qtd, ll last){
	if(memo[pos][qtd]) return memo[pos][qtd];
	if(pos==n+1 and qtd+1 > k - v[last]) return memo[pos][qtd]= 0;
	if(pos==n+1) return memo[pos][qtd] = 1e11+1000;
	qtd-=(v[pos]-v[last]);
	if(qtd<=0) return memo[pos][qtd]= 1e11+1000;
	return memo[pos][qtd] = min(f(pos+1, a, pos)+(a-qtd)*w[pos], f(pos+1, qtd, last));

}

int main()
{
	cin >> k >> n >> a;
	v[0]=0;
	for(ll i=1; i<=n; i++){
		cin >> v[i];
		if(v[i]-v[i-1] >= a) poss=false;
	}

	if(k-v[n] >= a) poss =false;

	for(ll i=1; i<=n; i++){
		cin >> w[i];
	}

	if(poss)
		cout << (ll) f(1, a, 0) << endl;
	else
		cout << -1 << endl;

	return 0;
}
