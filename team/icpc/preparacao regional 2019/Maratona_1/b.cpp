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
	int n;
	cin >> n;
	ll temp;
	while(n--){
		cin >> temp;
		ll l=1, r=1e8;
		while(r-l > 1){
			ll mid = (l+r)/2;
			if((mid*(mid+1))/2 >= temp){
				r=mid;
			}else{
				l= mid;
			}
		}
		cout << r << endl;
	}
	return 0;
}
