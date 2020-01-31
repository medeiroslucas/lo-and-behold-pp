/*
 *	 author: lucas_medeiros - github.com/medeiroslucas
 *	   team: Lo and Behold ++
 *	created: 17-10-2019 14:57:39
 *	contest: 1237
 *	problem: B
 *	 solved: True
*/

#include<bits/stdc++.h>

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

	int n, aux, ans=0;

	cin >> n;

	queue<int> nums;
	set<int> gone;

	for(int i=0; i<n; i++){
		cin >> aux;
		nums.push(aux);
	}
	for(int i=0; i<n; i++){
		cin >> aux;
		gone.insert(aux);
		if(!nums.empty()){
			if(nums.front() != aux){
				ans++;
			}else{
				nums.pop();
				while(gone.find(nums.front()) != gone.end()) 
					nums.pop();
			}
		}else{
			break;
		}
	}

	cout << ans << endl;

	return 0;
}
