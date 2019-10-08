#include<bits/stdc++.h>

using namespace std;

int main(){

	int N;
	cin >> N;
	int aux;

	for(int i=0;i<N;i++){
		cin >> aux;
		if(aux<3){
			cout << 2 << endl;
			continue;
		}
		else cout << aux%2 << endl;
	}


	return 0;
}
