/*
 *	 author: lucas_medeiros - github.com/medeiroslucas
 *	   team: Lo and Behold ++
 *	created: 08-10-2019 10:07:40
 *	contest: 598
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

	ll n, sum, less=0;

	cin >> t;

	while(t--){
	
		cin >> n;

		sum = (n * (n + 1))/2;

		less = 0;
		for(int i=0; pow(2, i)<=n; i++){
			less += pow(2, i);
		}

		sum -= 2 * less;
		cout << sum << endl;
	}

	return 0;
}
