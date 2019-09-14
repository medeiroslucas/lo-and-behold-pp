#include<bits/stdc++.h>

using namespace std;

int main(){

	int n, z=0, o=0;
	string s;

	cin >> n >> s;

	for(auto c:s){
		c == '1' ? o++ : z++;
	}

	if(z != o){
		cout << "1" << endl;
		cout << s << endl;
	}
	else{

		cout << "2" << endl;
		cout << s[0] << " " << s.substr(1, s.size()) << endl;

	}

	return 0;
}
