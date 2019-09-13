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

void fold(pair<vector<int>,int> &a,int j){
	for(int i=j,k=j+1; i>=0; i--,k++){
		if(k>=a.ss && a.ff.sz==a.ss){
			a.ff.pb(a.ff[i]);
			a.ss++;
		}
		else{
			a.ff[k]+=a.ff[i];
		}
	}


	a.ss=max(j+1,abs(a.ss-(j+1)));

	for(int i=j+1,k=0;k<a.ff.sz;i++,k++){
		if(k>=a.ss) a.ff[k]=0;
	
		else{
			a.ff[k]=a.ff[i];	
		}
	}
	for(auto kaka:a.ff){
		cout << ' ' << kaka;
	}

	cout << endl;

}

bool equals(pair<vi,int> &a, vi b){
	if(a.ss != b.sz) return false;

	for(int i=0; i<a.ss; i++){
		if(a.ff[i] != b[i]) return false;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);	

	int n,m;

	cin >> n;
	
	pair<vector<int>,int> v;
	v.ss=n;
	int aux;

	for(int i=0;i<n;i++){
		cin >> aux;
		v.ff.pb(aux);
	}

	cin >> m;
	vector<int> ans(m);

	for(int i=0;i<m;i++){
		cin >> ans[i];
	}
	
	bitset<15> bit;


	for(int i=0;i<pow(2,n);i++){
		bit=i;
		
		auto vec_a=v;

		if(!bit[n-1]){
			for(int j=0;j<n-2;j++){
				if(bit[j]){
					fold(vec_a,j);
				}
			}
			
			cout << bit << "->";
			
			for(auto p:vec_a.ff){
				cout << p << " ";
			}
			cout << endl;
			if(equals(vec_a, ans)){
				cout << "S" << endl;
				return 0;
			}
		}else{
			reverse(vec_a.ff.begin(), vec_a.ff.begin()+vec_a.ss);

			for(int j=0;j<n-2;j++){
				if(bit[j]){
					fold(vec_a,j);
				}
			}
			cout << "tou indo ao contrario ";
			cout << bit << "->";
			for(auto p:vec_a.ff){
				cout << p << " ";
			}
			cout << ' '<< vec_a.ss << endl;
			if(equals(vec_a, ans)){
				cout << "S" << endl;
				return 0;
			}
		}
	}

	cout << "N" << endl;
	
	return 0;
}
