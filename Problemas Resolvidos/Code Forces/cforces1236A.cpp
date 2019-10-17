/*
 *	 author: lucas_medeiros - github.com/medeiroslucas
 *	   team: Lo and Behold ++
 *	created: 17-10-2019 10:27:12
 *	contest: 1236
 *	problem: A
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
const ll MOD = 1e9+7;

int main(){
	ios_base::sync_with_stdio(false);	

	int n;

	cin >> n;

	while(n--){

		vi nums(3);
		int ans=0;

		cin >> nums[0] >> nums[1] >> nums[2];

		while(nums[1] > 0 && nums[2] > 1){
			nums[1]--;
			nums[2] -= 2;
			ans += 3;
		}

		while(nums[0] > 0 && nums[1] > 1){
			nums[0]--;
			nums[1] -= 2;
			ans += 3;
		}
		cout << ans << endl;
	}

	return 0;
}
