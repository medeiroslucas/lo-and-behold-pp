#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int N,M;

	cin >> N;



	for(int i=0;i<N;i++){
		cin >> M;
		int ans=0;
		int maxi=0;
		set<int> ordered;
		int num=0;
		vector<int> v;
		priority_queue<int> pq;

		for(int j=0;j<M;j++){
			cin >> num;
			v.push_back(num);
			pq.push(num);
		}
		
		for(int j=0;j<M;j++){
			
			
			if(v[j]==pq.top()){
				ans++;
				ordered.insert(v[j]);
				pq.pop();
		//		cout << "aquiiii\n";
				continue;
			}
		
			if(maxi>v[j] && ordered.find(v[j])==ordered.end()){
				ans++;
				ordered.insert(v[j]);
			}

		
			if(ordered.find(v[j])==ordered.end()) maxi=max(v[j],maxi);

			ordered.insert(v[j]);
			
			while(ordered.find(pq.top())!=ordered.end()){
		//		cout << j << endl;
				pq.pop();
				if(pq.empty()) break;
			}
		}
		
		cout << ans-1 << endl;
	}


	return 0;
}
