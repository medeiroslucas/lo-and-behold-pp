#include<bits/stdc++.h>

using namespace std;

const int maxn=1e2;

int v[maxn];

int main(){
	int n, m;
	cin >> n >> m;
	int a, b, c;
	char trash;
	for(int i=0; i<n; i++){
		cin >> a >> trash >> b >> trash >> c;
		v[i] = 3600*a+b*60+c;
	}
	int minpen=1e9;
	int temp, ipos, aux;
	for(int i=0; i<m; i++){
		aux=0;
		for(int j=0; j<n ; j++){	
			cin >> a >> trash >> b >> trash >> c;
			
			temp = 3600*a+60*b+c;
			if(temp < v[j]){
				aux+=2*(v[j]-temp);
			}else{
				aux+=temp-v[j];
			}
		}

		if(aux < minpen){
			minpen=aux;
			ipos = i+1;
		}
	}

	cout << "Equipe vencedora: " << ipos << endl;
	cout << "Penalidade: " << minpen << " ponto(s)" << endl;
	return 0;
}
