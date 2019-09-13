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

	int n,r;

	cin >> n >> r;

	set<int> a;

	int aux;

	for(int i=0;i<r;i++){
		cin >> aux;
		a.insert(aux);
	}
	bool flag=false;
	for(int i=1;i<=n;i++){
		if(!(a.find(i)!=a.end())) cout << i << ' ',flag=true;
	}

	if(!flag) cout << '*';

	cout << endl;

	return 0;
}
