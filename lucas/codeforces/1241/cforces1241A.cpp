/*
 *	 author: lucas_medeiros - github.com/medeiroslucas
 *	   team: Lo and Behold ++
 *	created: 06-10-2019 12:07:25
 *	contest: 1241
 *	problem: A
 *	 solved: True
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

	ll q, n;

	cin >> q;

	while(q--){
		cin >> n;

		if(n<3){
			cout << (4-n) << endl;
		}
		else{
			if(!(n&1)){
				cout << 0 << endl;
			}else{
				cout << 1 << endl;
			}
		}
	
	}

	return 0;
}
