/*
 *	 author: lucas_medeiros - github.com/medeiroslucas
 *	   team: Lo and Behold ++
 *	created: 08-10-2019 11:33:11
 *	contest: 1238
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

	int t;

	cin >> t;

	while(t--){

		ll x, y;

		cin >> x >> y;

		if(abs(x-y) <= 1){
			cout << "NO" << endl;
		}else{
			cout << "YES" << endl;
		}
	}

	return 0;
}
