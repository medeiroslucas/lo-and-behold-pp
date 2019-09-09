#include <bits/stdc++.h>
using namespace std;

bool intercept(pair<int,int> x , pair<int,int> y){

if(max(x.first,x.second)<min(y.first,y.second) || min(x.first,x.second)>max(y.first,y.second)) return false;

return true;
}


double ni(pair<int,int> x , pair<int,int> y){
	return abs(((double)x.first+(double)x.second)/2.0-((double)y.first+(double)y.second)/2.0);
}

int main(){

	int n,r;
	int xi=0;
	cin >> n >> r;
	double h_total[2000];
	vector<pair<int,int>> v;

	for(int i=0;i<n;i++){
		cin >> xi;
		pair<int,int>range=make_pair(xi-r,r+xi);
		v.push_back(range);
		long double h_mark=0;
		int collide=-1;
		for(int j=0;j<i;j++){
			if(intercept(range,v[j]) && h_total[j]>h_mark){
				h_mark=h_total[j];
				collide=j;
			}
		}
		if(collide==-1){
			h_total[i]=2*r;
			continue;
		}
		
		h_total[i]=h_total[collide]+sqrt(pow(2*r,2)-pow(ni(range,v[collide]),2));
	}


	for(int i=0;i<n;i++){
		printf("%.8lf ", h_total[i]-r);
	}

	cout << endl;


	return 0;
}
