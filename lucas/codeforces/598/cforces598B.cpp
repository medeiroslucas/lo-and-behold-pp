/*
 *	 author: lucas_medeiros - github.com/medeiroslucas
 *	   team: Lo and Behold ++
 *	created: 08-10-2019 10:32:33
 *	contest: 598
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

int modInverse(int a, int m)
{
    a = a%m;
    for (int x=1; x<m; x++)
       if ((a*x) % m == 1)
          return x;
}

int main(){
	ios_base::sync_with_stdio(false);	

	string s;

	int m, l, r, k;

	cin >> s >> m;

	while(m--){

		cin >> l >> r >> k;

		

	}

	return 0;
}
