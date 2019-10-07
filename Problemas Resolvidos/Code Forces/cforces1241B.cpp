/*
 *	 author: lucas_medeiros - github.com/medeiroslucas
 *	   team: Lo and Behold ++
 *	created: 06-10-2019 12:20:09
 *	contest: 1241
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

	int q;
	string s1, s2;

	cin >> q;

	while(q--){
		cin >> s1 >> s2;

		bool eq = false;
		for(auto c:s1){
			for(auto p:s2){
				if(c == p){
					eq = true;
				}
			}
		}

		if(eq){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
		
	}

	return 0;
}
