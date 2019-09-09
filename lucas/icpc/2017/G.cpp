#include<bits/stdc++.h>

using namespace std;

long long int MAX=1e9+7;
long long int mem[55][100005];
long long int upper, lower, cont_min;


long long int dp(int min, int inter){

	if(min == cont_min){
		return mem[min][inter] = 1;
	}

	if(mem[min][inter] != -1){
		return	mem[min][inter]; 
	}
	long long int l=dp(min+1, inter+1), r=dp(min+1, inter-1);

	if(inter == upper){
		if (!l){
			return mem[min][inter]=1;
		}
		return mem[min][inter] = l%MAX;
	}
	if(inter == lower){
		if (!r){
			return mem[min][inter]=1;
		}
		return mem[min][inter] = r%MAX;
	}

	return mem[min][inter]=(l%MAX+r%MAX)%MAX;

}

int main(){

	memset(mem, -1, sizeof(mem));

	cin >> cont_min >> lower >> upper;

	long long int cont=0;

	for(int i=lower; i<=upper; i++){
		cont += dp(1, i)%MAX;
		cont %= MAX;
		for(int j=upper; j>=lower; j--){
			for(int i=1; i<=cont_min; i++){
				cout << mem[i][j] << " ";
			}
			cout << endl;
		}	
		cout << endl << endl;
	}


	cout << cont << endl;

	return 0;
}
