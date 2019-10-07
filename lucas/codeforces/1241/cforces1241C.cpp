/*
 *	 author: lucas_medeiros - github.com/medeiroslucas
 *	   team: Lo and Behold ++
 *	created: 06-10-2019 12:33:16
 *	contest: 1241
 *	problem: C
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

int main(){
	ios_base::sync_with_stdio(false);	

	ll q, n, x, y, a, b, aux, j;

	cin >> q;

	while(q--){
	
		cin >> n;
		vector<ll> num(n);
		vector<ll> order(n);

		for(int i=0; i<n; i++){
			cin >> aux;
			num[i] = -aux;
		}

		cin >> x >> a >> y >> b >> j;

		int lcm = (a*b)/__gcd(a, b);

		sort(num.begin(), num.end());

		for(int i=0; i<n; i++){
			order[i] = -1;
		}
		int k=0;
		for(int i=lcm; i<=n; i+=lcm, k++){
			order[i-1] = -num[k];
		}

		/*
		if(x > y){
			for(int i=a; i<=n;i+=a){
				if(order[i-1] == -1){
					order[i-1] = -num[k];
					k++;
				}
			}
			for(int i=b; i<=n ;i+=b){
				if(order[i-1] == -1){
					order[i-1] = -num[k];
					k++;
				}
			}
		}else{
			for(int i=b; i<=n;i+=b){
				if(order[i-1] == -1){
					order[i-1] = -num[k];
					k++;
				}
			}
			for(int i=a; i<=n ;i+=a){
				if(order[i-1] == -1){
					order[i-1] = -num[k];
					k++;
				}
			}
		}*/

		for(int i=1; i<=n; i++){
			if((i%a==0) xor (i%b ==0)){
				order[i-1] = -num[k];
				k++;
			}
		}

		for(int i=0; i<n; i++){
			if(order[i] == -1){
				order[i] = -num[k];
				k++;
			}
		}

		ll val=0;
		for(int i=1; i<=n; i++){
			if(i % a == 0 and i % b == 0){
				val += (double)order[i-1]*((double)x/100.0);
				val += (double)order[i-1]*((double)y/100.0);
			}else if(i%a==0){
				val += (double)order[i-1]*((double)x/100.0);
			}else if(i%b==0){
				val += (double)order[i-1]*((double)y/100.0);
			}
			//cout << val << " **** " << j << endl;
			if(val >= j){
				cout << (i) << endl;
				break;
			}
		}

		if(val < j){
			cout << -1 << endl;
		}

	}

	return 0;
}
