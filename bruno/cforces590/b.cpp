#include<bits/stdc++.h>

using namespace std;

int main(){

	set<long> screen;
	queue<long> order;

	long n,k;

	cin >> n >> k;
	
	long int id;

	for(int i=0;i<n;i++){
		cin >> id;
		if(screen.size()<k && screen.find(id)==screen.end()){
			order.push(id);
			screen.insert(id);
		}

		else if(screen.find(id) == screen.end()){
			int aux1=order.front();
			order.pop();
			screen.erase(screen.find(aux1));
			screen.insert(id);
			order.push(id);
		}
	}
	vector<long> aa;
	int i=0;
	while(!order.empty()){
		aa.push_back(order.front());
		order.pop();
	}

	cout << aa.size() << endl;
	reverse(aa.begin(),aa.end());

	for(i=0;i<aa.size();i++){
		cout << aa[i] << ' ';	
	}


	cout << endl;
	return 0;
}
