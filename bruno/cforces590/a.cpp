#include<bits/stdc++.h>

using namespace std;

int main(){

	int N;
	
	cin >> N;
	int aux=0;

	for(int i=0;i<N;i++){
		int M;
		cin >> M;
		long long sum=0;
		
		for(int j=0;j<M;j++){
			cin >> aux;
			sum+=aux;
		}

		cout << (int)ceil((double)sum/(double)M) << endl;
	
	}


	return 0;
}
