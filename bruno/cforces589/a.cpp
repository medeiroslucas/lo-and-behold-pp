#include<bits/stdc++.h>
using namespace std;

int main(){
	int l,r,x;
	int aux[10];
	cin >> l >> r;
	int ans=-1;
	for(int x=l;x<=r;x++){
		memset(aux,0,sizeof(aux));
		int num=x;
		do{
			aux[num%10]++;
			num/=10;
		}while(num!=0);
		bool flag=true;
		for(int i=0;i<10;i++)
			if(aux[i]>1) flag=false;

		if(flag){
			ans=x;
			break;
		}
	}

	cout << ans << endl;


	return 0;
}
