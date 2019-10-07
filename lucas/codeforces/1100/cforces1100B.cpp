/*
 *	 author: lucas_medeiros - github.com/medeiroslucas
 *	   team: Lo and Behold ++
 *	created: 05-10-2019 19:45:34
 *	contest: 1100
 *	problem: B
 *	 solved: False
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

    int n, m, num, cont=0;
    vector<int> indx;
    string ans="";

    cin >> n >> m;

	cont = n;

    for(int i=0; i<=n; i++){
        indx.push_back(0);
    }

    while(m--){
        cin >> num;
		if(!indx[num]) cont--;
        indx[num]++;

        if(cont == 0){
            ans += "1";

            for(int i=0; i<(int)indx.size(); i++){
                indx[i]--;
                if(indx[i] == 0) cont++;
            }
        }else{
            ans += "0";
        }

    }
    
    cout << ans << endl;

	return 0;
}
