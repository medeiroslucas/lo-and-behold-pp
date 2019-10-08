/*
 *	 author: esh2900
 *	   team: Lo and Behold ++
 *	created: 08-10-2019 11:32:41
 *	contest: 1238
 *	problem: B
 *	 solved: True
*/

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
	
	int N;
	cin >> N;
	
	for(int i=0;i<N;i++){
		vector<int>aux;
		int m,k;
		cin >> m >> k;
		int a;
		for(int j=0;j<m;j++){
			cin >> a;
			aux.push_back(a);
		}
		sort(aux.begin(),aux.end());
		int j,K;
		for(j=aux.size()-1,K=0;aux[j]>k*K and j>=0;j--,K++){
				while(aux[j]==aux[j-1]){
					j--;
					if(j==0) break;
				}
		}

		cout << K << endl;
	}


	return 0;
}
