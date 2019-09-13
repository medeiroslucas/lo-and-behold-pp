#include<bits/stdc++.h>

#define ss second
#define ff first
#define eb emplace_back
#define pb push_back
#define sz size()

using namespace std;

using ll = long long;
using vi = vector<int>;
using ii = pair<int, int>;
const double PI = acos(-1);
const double EPS = 1e-9;

int n, m;
int v[300][300];

void vn_swap(int a, int b){
	int vt[300];
	for(int i=0; i<m; i++){
		vt[i] = v[a][i];
		v[a][i] = v[b][i];
		v[b][i] = vt[i];
	}
}
void vm_swap(int a, int b){
	int vt[300];
	for(int i=0; i<n; i++){
		vt[i] = v[i][a];
		v[i][a] = v[i][b];
		v[i][b] = vt[i];
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> v[i][j];
		}
	}
	int ans=0;
	for(int i=0; i<n; i++){
		//	cerr << "#" << v[i][0] << endl;

		//	cerr << "##" << (v[i][0]-1)/m << endl;
		if((v[i][0]-1)/m == i) continue;
		else{
			for(int j=i; j<n; j++){
				//	cerr << "? " << 
				if((v[j][0]-1)/m == i){
					//			cerr << "@@@" << endl;
					vn_swap(i, j);
					break;
				}
			}

			ans++;
		}


	}



	for(int i=0; i<m; i++){
		if(v[0][i] == i+1) continue;
		else{
			for(int j=i; j<m; j++){
				if(v[0][j] == i+1){
					//	swap(v[0][i], v[0][j]);

					vm_swap(i, j);
					break;
				}
			}
			ans++;
		}
	}
	bool resp=true;
	int cont=1;


	for(int i=0; i<n; i++){
		if(!resp) break;
		for(int j=0; j<m; j++){
			if(v[i][j] != cont){
				resp=false;
				break;
			}
			cont++;
		}
	}

	if(resp) cout << ans << endl;
	else cout << "*" << endl;

	return 0;
}
