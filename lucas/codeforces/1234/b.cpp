#include<bits/stdc++.h>

using namespace std;

int main(){

	long long int n, k, aux;
	set<long long int> on_list;

	cin >> n >> k;

	list<int> nums;

	for(int i=0; i<n; i++){
		cin >> aux;
		if(on_list.find(aux) == on_list.end()){
			on_list.insert(aux);
			nums.push_front(aux);
			if(nums.size() > k){
				auto last = nums.back();
				nums.pop_back();
				on_list.erase(on_list.find(last));	
			}
		}
	}

	cout << nums.size() << endl;

	for(auto p:nums){
		cout << p << " ";
	}

	cout << endl;

	return 0;
}
