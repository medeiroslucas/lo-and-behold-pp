#include<bits/stdc++.h>

using namespace std;

int a[100000][2];

int main(){

	int N;

	cin >> N;
	int M;
	
	for(int i=0;i<N;i++){
		cin >> M;
		int aux0,aux1;
		string b;
		cin >> b;
		for(int j=0;j<M;j++){
			a[j][0]=b[j]-'0';
		}
		cin >> b;
		for(int j=0;j<M;j++){
			a[j][1]=b[j]-'0';
		}
		
		int x=0,y=0;
		int dir=0;
		bool possible=true;
		bool d=true;
			
		while(x<M){
			if(a[x][y]==1 || a[x][y]==2){
				if(d==true) x++;
				else break;
			}

			else{
				if(d==true) y=(y+1)%2,d=false;
				else x++,d=true;
			}

		}

			if(y==1 and d==true)
				cout << "YES" << endl;
			else{
				cout << "NO" << endl;
			}
	}

	return 0;
}
