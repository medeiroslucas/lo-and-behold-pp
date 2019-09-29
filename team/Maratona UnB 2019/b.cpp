#include<bits/stdc++.h>

using namespace std;

int adj[505][505];
vector<int> G[505];
int visited[505];
bool cycle[505];


int main(){

	for(int i=0;i<501;i++){
		for(int j=0;j<501;j++){
			adj[i][j]=100000;
		}
	}
	int n,m;
	

	cin >> n >> m;
	int a,b,dist;
	if(n==2){
		cin >> n >> n >> n;
		cout << 2*n << endl;
		return 0;
	}

	for(int i=0;i<m;i++){
		cin >> a >> b >> dist;
		adj[a][b]=dist;
		adj[b][a]=dist;
		G[a].push_back(b);
		G[b].push_back(a);
	}


	for(int i=0;i<n;i++){
		if(G[i].size()==1){
			adj[G[i][0]][i]*=2;
			adj[i][G[i][0]]*=2;
		}
	}

	for(int k=0;k<n;k++)
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				adj[i][j]=min(adj[i][j],adj[i][k]+adj[k][j]);

	cin >> n >> m;

	cout << adj[n][m] << endl;
	
	return 0;
}
