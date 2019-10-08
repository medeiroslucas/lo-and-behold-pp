/*
 *	 author: lucas_medeiros - github.com/medeiroslucas
 *	   team: Lo and Behold ++
 *	created: 08-10-2019 12:37:54
 *	contest: 1238
 *	problem: C
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

	int q;

	cin >> q;

	while(q--){
		
		ll h, n, aux, ans=0;

		cin >> h >> n;

		set<ll> num;

		for(int i=0; i<n; i++){
			cin >> aux; 
			num.insert(aux);
		}

		num.insert(0);

		//for(auto p:num){
		//	cout << p << " ";
		//}
		//cout << endl;

		auto atual = prev(num.end());
		auto prox = prev(atual);

		while(*atual > 2){

			//cout << "### " << *atual << " " << *prox << endl;
			
			if(*atual - *prox > 1){
				num.insert(*prox+1);
				atual = prev(atual);
				//cout << "**** " << *atual << endl;
			}else {
				auto prox_prox = prev(prox);

				if(*prox - *prox_prox > 1){
					ans++;
					num.insert(*prox-1);
					atual = prev(prox);
					prox = prox_prox;
					//cout << "Entrou aqui " << *atual << " " << *prox << endl;
				}else{
					atual = prox_prox;
					prox = prev(atual);
				}
			}

		}

		cout << ans << endl;

	}

	return 0;
}
