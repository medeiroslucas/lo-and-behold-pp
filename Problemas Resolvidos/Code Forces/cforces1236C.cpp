/*
 *	 author: lucas_medeiros - github.com/medeiroslucas
 *	   team: Lo and Behold ++
 *	created: 17-10-2019 11:58:55
 *	contest: 1236
 *	problem: C
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

	int n;

	cin >> n;

	vi gps[n];

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			int y;
			if(i % 2 == 0){
				y = i*n+j+1;
			}else{
				y = (i+1)*n-j;
			}
			gps[j].pb(y);
		}
	}

	for(auto p:gps){
		for(auto n:p){
			cout << n << " ";
		}
		cout << endl;
	}

	return 0;
}
