#include<bits/stdc++.h>


using namespace std;

int a[200005];

int main(){
	
	int N;

	cin >> N;

	for(int i=0;i<N;i++){
		cin >> a[i];
	}

	int lcm=1;

	for(int i=0;i<N;i++){
		if(a[i])
			lcm=max(lcm,a[i]);
	}


	int gcd=0;



	for(int i=0;i<N;i++){
		gcd=__gcd(gcd,lcm-a[i]);
	}

	long long int N_p=0;
	
	for(int i=0;i<N;i++){
		N_p+=(lcm-a[i])/gcd;
	}
	cout << lcm << endl;	
	cout << N_p << ' ' << gcd << endl;

	return 0;
}
