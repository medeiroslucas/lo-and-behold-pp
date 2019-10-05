#include<bits/stdc++.h>

using namespace std;

int main(){

	int n, cont=0;
	string s;

	cin >> n >> s;

	if(n%2!=0){
		cout << "NO" << endl;
		return 0;
	}

	for(auto c:s){
		if(c == '('){
			cont++;
		}
		else{
			cont--;
		}
		//if(cont == -1){
		//	if(!al){
		//		al=true;
		//	}else{
		//		cout << "NO" << endl;
		//		return 0;
		//	}
		//}
		if(cont<-1){
			cout << "NO" << endl;
			return 0;
		}
	}

	if(!cont){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}

	return 0;
}
