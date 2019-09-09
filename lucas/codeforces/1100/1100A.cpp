#include<bits/stdc++.h>

using namespace std;

int main(){

	int n, c, k, aux, cont_e=0, cont_s=0, max=-1;
	vector<int> tabs;
	vector<int> aux_tabs;
	vector<int> num;
	set<int> select_tab;
	cin >> n >> k;

	for(int i=0; i<n; i++){
		cin >> aux;
		tabs.push_back(aux);
	}	
	
	for(int b=1; b<=n; b++){

		for(int i=0; c > 0; i--){
			c = b + i*k;
			if(c<=0){
				break;
			}
			select_tab.insert(c);
		}
		for(int i=0; c <= n; i++){
			c = b + i*k;
			if(c>n){
				break;
			}
			select_tab.insert(c);
		}

		aux_tabs = tabs;

		for(auto p:select_tab){
			num.push_back(p);
		}

		reverse(num.begin(), num.end());

		for(auto p:num){
			aux_tabs.erase(aux_tabs.begin()+p-1);
		}
		
		for(auto p:aux_tabs){
			if(p == -1){
				cont_e++;
			}else{
				cont_s++;
			}
		}

		int temp = abs(cont_e-cont_s);
		if(temp > max) max = temp;
		cont_e=0;
		cont_s=0;
		aux_tabs.clear();
		select_tab.clear();
		num.clear();
	}

	cout << max << endl;

	return 0;
}
