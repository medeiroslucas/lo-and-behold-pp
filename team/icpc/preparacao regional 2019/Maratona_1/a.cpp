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

bool is_prime(long long N){
	
	if(N==1) return false;
	if(N==2) return true;
	if(N%2==0) return false;
	
	for(int i=3;i<=sqrt(N);i+=2){
		if(N%i==0) return false;
	}

	return true;
}


int main(){
	ios_base::sync_with_stdio(false);	

	int N;

	cin >> N;
	vector<long long> V1,V2;

	for(int k=0;k<N;k++){
		ll a,b;
	
		V1.clear();
		V2.clear();

		cin >> a >> a >> b;
		a++;
		b++;
		
		
		V1.pb(-1);
		V1.pb(-1);

		V1.pb(a);
		V2.pb(b);

		while(1){
			if(a<1 && b<1) break;

			if(a!=0)V1.pb(a/=2);
			if(b!=0)V2.pb(b/=2);
			
		}

		ll i=V1.size()-1;
		ll j=V2.size()-1;
		

		for(;;i--,j--){
			if(V1[i]==-1 || V2[j]==-1) break;
			if(V1[i]!=V2[j]) break;
		}

		
		bool flag=is_prime(V1[++i]-1);

		cout << V1[i]-1 << " " << flag << endl;


	}


	return 0;
}
