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

const int MAXV = 20;
const int MAXX = 1 << 20;
int memo[MAXX];
int v[MAXV][MAXV];
//bitset<20> bt;
int knp(int i, int bt){
	if(i>=MAXV) return 0;
	if(memo[bt]) return memo[bt];
	int imax=-1e7;
//	bool cat = false;
	for(int j=0; j<MAXV; j++){
		if(!(bt & (1<<j))) {
			int aa = knp(i+1, bt|(1<<j))+v[i][j];
			imax=max(aa,imax);
			//cerr << "@" << imax <<"//" <<(bitset<MAXV> )bt << endl;
		}
	}

	//cerr << "##" << (bitset<MAXV>) bt << "//"  <<imax << endl;
	return memo[bt]=imax;
}

int main(){
	ios_base::sync_with_stdio(false);	
//	bt.reset();
	for(int i=0; i<MAXV; i++){
		for(int j=0; j<MAXV; j++){
			cin >> v[i][j];
		}
	}
	int jmax=0;
	for(int i=0; i<MAXV; i++){
		jmax = max(jmax, knp(i, 0));
	//	cout << "?"
	}
	cout << jmax << endl;
	//cout << knp(0,0)  << endl;

	return 0;
}
