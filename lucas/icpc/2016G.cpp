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

// 1 = Preta
// 0 = Branca

int tab[505][505];

bool validate(const int peca, ii pos,const int n){

	if(pos.ff > n or pos.ff < 1 or pos.ss > n or pos.ss < 1){
		return false;
	}

	if(peca and !tab[pos.ff][pos.ss]) return false;
	if(!peca and tab[pos.ff][pos.ss]) return false;

	return true;
}

int area(int peca, ii ini, ii fim){
	if(peca){
		if(ini.ff > fim.ff){
			for(int i=ini.ff; )
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);	

	memset(tab, -1, sizeof(tab));

	int n, p, cont_pretas=0, cont_brancas=0;
	ii aux;
	vector<ii> pretas, brancas;

	cin >> n >> p;

	for(int i=1; i<=p; i++){
		cin >> aux.ff >> aux.ss;
		tab[aux.ff][aux.ss] = 1;
		pretas.pb(aux);
	}
	for(int i=1; i<=p; i++){
		cin >> aux.ff >> aux.ss;
		tab[aux.ff][aux.ss] = 0;
		brancas.pb(aux);
	}

	for(auto peca:pretas){
	

	}



	return 0;
}
