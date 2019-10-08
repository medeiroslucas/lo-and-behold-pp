/*
 *	 author: lucas_medeiros - github.com/medeiroslucas
 *	   team: Lo and Behold ++
 *	created: 08-10-2019 11:50:24
 *	contest: 1238
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

int main(){
	ios_base::sync_with_stdio(false);	

	int q;

	cin >> q;

	while(q--){

		int n, r;

		cin >> n >> r;

		vi num(n);

		for(int i=0; i<n; i++) cin >> num[i];
		sort(num.begin(), num.end());

		int i, j;
		for(i=n-1, j=0; num[i]>r*j and i>=0; i--, j++){
			if(i >= 1){
				while(num[i] == num[i-1]){
					i--;
					if(!i) break;
				}	
			}
		}
		cout << j << endl;
	}

	return 0;
}
