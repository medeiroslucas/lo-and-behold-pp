#include<bits/stdc++.h>

using namespace std;

int main(){

	int words[30], n;
	memset(words, 0, sizeof(words));
	string in;
	vector<int> ans;

	cin >> n;

	cin >> in;

	for(auto c:in){
		words[c-'a']++;
	}

	while(words['o'-'a'] and words['n'-'a'] and words['e'-'a']){
		ans.push_back(1);
		words['o'-'a']--;
		words['n'-'a']--;
		words['e'-'a']--;
	}

	while(words['z'-'a'] and words['e'-'a'] and words['r'-'a'] and words['o'-'a']){
		ans.push_back(0);
		words['z'-'a']--;
		words['e'-'a']--; 
		words['r'-'a']--;
		words['o'-'a']--;
	}

	for(int i=0; i<ans.size(); i++){
		if(i) cout << " ";
		cout << ans[i];
	}
	cout << endl;

	return 0;
}
