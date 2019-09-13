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

	int a, b, c;

	cin >> a >> b >> c;

	if(a==0 && b==0 && c==0){
		cout << "*" << endl;
		return 0;
	}
	if(a==1 && b==1 && c==1){
		cout << "*" << endl;
		return 0;
	}
	if(a==1 && b==0 && c==0){
		cout << "A" << endl;
		return 0;
	}
	if(a==0 && b==1 && c==0){
		cout << "B" << endl;
		return 0;
	}
	if(a==0 && b==0 && c==1){
		cout << "C" << endl;
		return 0;
	}
	if(a==0 && b==1 && c==1){
		cout << "A" << endl;
		return 0;
	}
	if(a==1 && b==0 && c==1){
		cout << "B" << endl;
		return 0;
	}
	if(a==1 && b==1 && c==0){
		cout << "C" << endl;
		return 0;
	}

	return 0;
}
