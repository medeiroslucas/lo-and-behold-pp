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


int gold[10005];
int cit,cap;
vector<pair<int,int>> G[10005];
int dist[10005][10005];

long int acum=0;

void dfs(int i,int fat){
	
	for(int j=0;j<G[i].size();j++){//para todos os vizinhos do nó
		if(G[i][j].ff != fat){
			dfs(G[i][j].ff,i);
		}
	}
	
	acum+=2*dist[i][fat]*(ceil((float)gold[i]/(float)cap));
	gold[fat]+=gold[i];
	gold[i]=0;
	
	return;
}	



int main(){
	ios_base::sync_with_stdio(false);


cin >> cit >> cap;

for(int i=1;i<=cit;i++){
	cin >> gold[i];
}

int aux1,aux2,weight;

for(int i=0;i<cit-1;i++){
	cin >> aux1 >> aux2 >> weight;
	G[aux1].pb(make_pair(aux2,weight));
	G[aux2].pb(make_pair(aux1,weight));
	
	dist[aux1][aux2]=weight;
	dist[aux2][aux1]=weight;
}
dfs(1,1);
cout << acum << endl;

return 0;
}
