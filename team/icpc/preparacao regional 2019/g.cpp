#include<bits/stdc++.h>

using namespace std;

int main(){

	int N;

	cin >> N;

	while(N--){
	long long int a,b;

	cin >> a >> b;

	long long int resp=(b-a+1)/2;

	if(a%2==0 and b%2==0) resp++;

	cout << resp << endl;

	}


	return 0;
}
