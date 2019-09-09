#include<bits/stdc++.h>

using namespace std;

int MOD=1e9+7;

long long memo[52][100010];

long long ways(int T,int i,int N,int M){

	if(i<N || i>M){
		return 0;
	}

	if(T==0){
		return memo[T][i]=1;
	}	

	if(memo[T][i]!=-1) return memo[T][i];

	
	long long res=(ways(T-1,i-1,N,M)+ways(T-1,i+1,N,M))%MOD;
	memo[T][i]=res;

	return res%MOD;
}



int main(){

	int T,N,M;
	cin >> T >> N >> M;

	long long ans=0;

	memset(memo,-1,sizeof(memo));

	for(int i=N;i<=M;i++){
		ans+=ways(T-1,i,N,M);
		ans%=MOD;
	}
	

	cout << ans<< endl;

return 0;
}
