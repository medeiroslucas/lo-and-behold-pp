#include<bits/stdc++.h>

using namespace std;

int main(){

	string s;
	int cont=0;

	cin >> s;

	for(int i=0, j=s.size()-1; i<j; i++, j--){
		if(s[i] != s[j]) cont++;
	}

	if(cont == 1) cout << "YES" << endl;
	else {

		if(cont == 0 && s.size()%2 != 0){
			cout << "YES" << endl;
		}

		else{
			cout << "NO" << endl;
		}

	}

	return 0;
}
