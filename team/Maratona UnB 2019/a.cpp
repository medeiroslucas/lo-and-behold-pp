#include<bits/stdc++.h>
#define ff first
#define ss second

using namespace std;

using ll = long long;

int main(){
	ll n, m;
	cin >> n >> m;
	ll a, b;
	vector<tuple <ll ,ll, ll> >  vp;
	vector<tuple <ll ,ll, ll, ll> > vt;

	for(ll i=0; i<n; i++){
		cin >> a>> b;
		vp.emplace_back(-a, b, i+1);
		vt.emplace_back(a%m, -a, b, i+1);
	}
	//sort(vp.begin(), vp.end());
	sort(vt.begin(), vt.end());

	bool solve=false;
	ll res=0, r1, r2;
	for(auto each: vp){
		ll temp=m-(abs(get<0>(each))%m);
		if(temp==m) temp=0;
		tuple<ll, ll, ll, ll> aaa {temp, -2e9, -2e9, -2e9};
		auto pt = lower_bound(vt.begin(), vt.end(), aaa);
		if(pt==vt.end()) continue;
		auto x = vt[pt - vt.begin()];
		if(get<2>(each) == get<3>(x)) pt++;
		if(pt==vt.end()) continue;
		x = vt[pt-vt.begin()];
		//cerr << "#" << get<0 
		if((get<0>(x) + abs(get<0>(each))%m == m) or (get<0>(x) + abs(get<0>(each))%m == 0)){
			solve=true;
			if(abs(get<0>(each) + get<1>(x)) > res){
				res = abs(get<0>(each) + get<1>(x));
				r1=get<2>(each);
				r2=get<3>(x);
			}
		}
	}
	
	if(solve){
		cout << r2 << " " << r1 << endl;
	}else{
		cout << -1 << endl;
	}

	return 0;
}
