#include<bits/stdc++.h>

using namespace std;


int main(){

	int n,m;

	cin >> n >> m;
	char aux;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin >> aux;
			if(aux=='W') cout << i << ' '<< j << endl;
		}
	}

	return 0;
}
