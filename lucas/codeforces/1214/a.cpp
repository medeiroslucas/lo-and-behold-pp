#include<bits/stdc++.h>

#define DEBUG false
#define coutd if(DEBUG) cout
#define debugf if(DEBUG) printf
#define ff firts
#define ss second
#define pb push_back
#define eb emplace_back
#define sz size()

using namespace std;

int main(){

	int dolar[7]{1, 2, 5, 10, 20, 50, 100};
	int euro[6]{5, 10, 20, 50, 100, 200};

	int n, e, d;

	cin >> n >> d >> e;

	n %= euro[5]*e;

	cout << n << endl;

	for(int i=4; i>=0 ; i--){
		if(n%(dolar[i+2]*d) < n%(euro[i]*e)){
			cout << "DOLAR ";
			cout << n << "-> ";
			n %= dolar[i+2]*d;
			cout << n << " " << dolar[i+2] << endl;
		}else{
			cout << "EURO ";
			cout << n << "-> ";
			n %= euro[i]*e;
			cout << n << " " << euro[i] << endl;
		}
	}

	cout << n << endl;

	n %= dolar[1]*d;
	n %= dolar[0]*d;

	cout << n << endl;

	return 0;
}
