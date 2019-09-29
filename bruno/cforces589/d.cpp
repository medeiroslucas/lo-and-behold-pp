#include<bits/stdc++.h>
using namespace std;

vector<int> G[100005];
int state[100005];
void dfs(int i){
	
	bool s[3];
	memset(s,true,sizeof(s));

	if(!state[i]){
		for(int j=0;j<G[i].size();j++){
			if(state[G[i][j]]) s[state[G[i][j]]-1]=false;
		}
	}

	for(int j=0;j<3;j++){
		if(s[j])
			state[i]=j+1;
	}

	if(state[i]==0) state[i]=-1;

	for(int j=0;j<G[i].size();j++){
		if(!state[G[i][j]]) dfs(G[i][j]);
	}

	return;
}

int main(){

	int N,M;

	cin >> N >> M;
	int a1,a2;

	for(int i=0;i<M;i++){
		cin >> a1 >> a2;
		G[a1].push_back(a2);
		G[a2].push_back(a1);
	}

	for(int i=1;i<=N;i++){
		if(!state[i])
			dfs(i);
	}

	for(int i=1;i<=N;i++){
		if(state[i]==-1){
			cout << -1 << endl;
			return 0;
		}
	}

	for(int i=1;i<=N;i++){
		cout << state[i] << ' ';
	}
	cout << endl;
	return 0;
}
