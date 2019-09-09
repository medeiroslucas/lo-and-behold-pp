#include<bits/stdc++.h>

using namespace std;

int main(){

	vector<int> num;
	int aux;

	cin >> aux;

	num.push_back(aux);

	cin >> aux;

	num.push_back(aux);

	cin >> aux;

	num.push_back(aux);

	sort(num.begin(), num.end());

	if(num[0] + num[1] > num[2]){
		cout << 0 << endl;
		return 0;
	}

	cout << (num[2] - (num[0] + num[1]) + 1) << endl;

	return 0;
}
