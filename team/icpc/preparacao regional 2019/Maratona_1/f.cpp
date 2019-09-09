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
	long long int temp;
	while(n--){
		cin >> temp;
		if(temp==1){
			cout << 2 << endl;
			continue;
		}
	//	cerr << "#"<< log2(temp) << endl;
		temp = pow((ll) 2, (ll) log2(temp)+1) -  (ll) 1;
		cout << temp << endl;
	}
	return 0;
}
