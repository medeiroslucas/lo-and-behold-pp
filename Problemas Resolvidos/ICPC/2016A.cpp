#include<bits/stdc++.h>

using namespace std;

int main(){
	
	vector<int> xs(3);

	cin >> xs[0] >> xs[1] >> xs[2];

	if(xs[0] == xs[1] || xs[1] == xs[2] || xs[2] == xs[0]){
		cout << "S" << endl;
		return 0;
	}

	sort(xs.begin(), xs.end());
	
	if(xs[0]+xs[1] == xs[2]){
		cout << "S" << endl;
	}else{
		cout << "N" << endl;
	}
	
	return 0;
}
