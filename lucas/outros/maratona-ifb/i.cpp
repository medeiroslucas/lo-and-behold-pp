#include<bits/stdc++.h>

using namespace std;

using ull = unsigned long long int;

vector<unsigned long long int> ff;

char certo(unsigned long long int line, unsigned long long int index){

	//cout << "Line: " << line << ", ff[line]: " << ff[line] << ", Index: " << index << endl;

	if(line == 0) return 'B';
	
	if(line == 1) return 'A';

	if(line == 2){
		if(index == 2) return 'B';
		return 'A';
	}

	ull ff_gera1 = ff[line-1];
	ull ff_gera2 = ff[line-2];
	
	//cout << ff_gera1 << " " << ff_gera2 << endl;

	if(index > ff_gera1){
		return certo(line-2, index-ff_gera1);
	}else{
		return certo(line-1, index);
	}

}

char errado(ull line, ull index){

	//cout << "Line: " << line << ", ff[line]: " << ff[line] << ", Index: " << index << endl;

	if(line == 1) return 'A';
	
	if(line == 0) return 'B';

	if(line == 2){
		if(index == 2) return 'A';
		return 'B';
	}

	ull ff_gera1 = ff[line-1];
	ull ff_gera2 = ff[line-2];
	
	//cout << ff_gera1 << " " << ff_gera2 << endl;

	if(index > ff_gera2){
		return errado(line-1, index-ff_gera2);
	}else{
		return errado(line-2, index);
	}

}

int main(){

	unsigned long long int N, aux, line;
	unsigned long long int index;
	//bool question = true;

	cin >> N;

	ff.push_back(1);
	ff.push_back(1);
	
	for(int i=2; i<100; i++){
		ff.push_back(ff[i-1]+ff[i-2]);
	}
	
	while(N--){
	
		cin >> index;
		
		for(int i=0; i<100; i++){
			if(ff[i] >= index){
				line = i;
				break; 
			}
		}
		
		//cout << certo(line, index) << " " << errado(line, index) << endl;
	
		if(errado(line, index) != certo(line, index)){
			cout << "WA" << endl;
			return 0;
		}
		
	}
	
	cout << "AC" << endl;

	return 0;
}
