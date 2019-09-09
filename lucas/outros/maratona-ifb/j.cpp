#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	double mediana, aux, ans=0;
	vector<double> num;
	
	scanf("%d", &n);
	
	while(n--){
		scanf("%lf", &aux);
		num.push_back(aux);
	}
	
	sort(num.begin(), num.end());
	
	mediana = num[(int)(num.size()/2)];

	for(auto p:num){
		ans += fabs(p-mediana);
	}
	
	printf("%.5lf\n", ans);

	return 0;
}
