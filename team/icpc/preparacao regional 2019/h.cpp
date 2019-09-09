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
	while(n--){
		int a;
		cin >> a;
		if(a & 1) cout << 0 << endl;
		else cout << a/2 << endl;
	}
	return 0;
}
