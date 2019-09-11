#include<bits/stdc++.h>
using namespace std;

int d_set[200005];
int level[200005];

void dsu_gen(int N){
	for(int i=0;i<N;i++){
		d_set[i]=i;
		level[i]=0;
	}
}

int find(int i){
	if(d_set[i]==i) return i;
	return d_set[i]=find(d_set[i]);
}

bool isSameSet(int i,int j){
	return find(i)==find(j);
}

void unite(int i,int j){
	if(!isSameSet(i,j)){
		int x=find(i),y=find(j);
		if(level[x]>level[y]) d_set[y]=x;
		else{
			d_set[x]=y;
			if(level[x]==level[y]) level[y]++;
		}
	}

}


int main(){

	while(1){
		
		int N,M;
		vector<pair<int,pair<int,int>>> roads;

		cin >> N >> M;
		if(N==0) break;

		dsu_gen(N);

		int a,b,c;
		for(int i=0;i<M;i++){
			scanf("%d %d %d",&a,&b,&c);
			roads.push_back({c,{a,b}});
		}
		
		sort(roads.begin(),roads.end());
		long int econ=0; 

		for(int i=0;i<roads.size();i++){
			if(!isSameSet(roads[i].second.first,roads[i].second.second)){
				unite(roads[i].second.first,roads[i].second.second);
			}
			else{
				econ+=roads[i].first;
			}
		}

		printf("%d\n",econ);
		roads.clear();
	}

	

	return 0;
}
