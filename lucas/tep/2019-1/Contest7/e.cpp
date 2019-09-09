#include<bits/stdc++.h>

using namespace std;

int main(){

	double lado, x, y, degrau, quadrado;

	cin >> lado >> x >> y;

	degrau = ceil((double)y/(double)lado);

	if((int)y%(int)lado == 0){
		cout << -1 << endl;
		return 0;
	}

	if(degrau == 1){
		if(abs(x) < lado/2){
			cout << 1 << endl;
			return 0;
		}else{
			cout << -1 << endl;
			return 0;
		}
	}

	if((int)degrau%2 == 0){
		quadrado = 2+3*((int)(degrau/2)-1);
		if(abs(x) < lado/2 ){
			cout << quadrado << endl;
		}else{
			cout << -1 << endl;
		}
	}
	else{
		if(!x){
			cout << -1 << endl;
		}else if(x > 0){
			quadrado = (3*((int)(degrau/2)))+1;
			if(abs(x) < lado){
				cout << quadrado << endl;
			}else{
				cout << -1 << endl;
			}
		}else if(x < 0){
			quadrado = (3*((int)(degrau/2)));
			if(abs(x) < lado){
				cout << quadrado << endl;
			}
			else{
				cout << -1 << endl;
			}
		}
	}

	return 0;
}
