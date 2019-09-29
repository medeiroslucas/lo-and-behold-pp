#include<bits/stdc++.h>
using namespace std;

bool grid[1005][1005];
int mark[1005][1005];

int main(){

	int h,w;
	int H[1005],W[1005];

	scanf("%d%d",&h,&w);

	for(int i=0;i<h;i++){
		scanf("%d",&H[i]);
	}
		
	for(int i=0;i<w;i++){
		scanf("%d",&W[i]);
	}
	
	int unknown=h*w;
	//cout << unknown << endl;
    for(int i=0;i<h;i++){
		for(int j=0;j<=H[i];j++){
			if(!mark[i][j] && j<w){
				if(j<H[i]) mark[i][j]=1;
				else mark[i][j]=2;
			}
			else if(j<w){
				if(j<H[i] && mark[i][j]==2 || j==H[i] && mark[i][j]==1){
					cout << 0 << endl;
					return 0;
				}
			}
			if(!grid[i][j] && j<w){
				grid[i][j]=true;
				unknown--;
			}
		}
	}

    for(int i=0;i<w;i++){
		for(int j=0;j<=W[i];j++){
			
			if(!mark[j][i] && j<h){
				if(j<W[i]) mark[j][i]=1;
				else mark[j][i]=2;
			}
			else if(j<h){
				if(j<W[i] && mark[j][i]==2 || j==W[i] && mark[j][i]==1){
					cout << 0 << endl;
					return 0;
				}
			}


			if(!grid[j][i] && j<h){
				grid[j][i]=true;
				unknown--;
			}
		}
	}
	
	//cout << unknown << endl;
	if(unknown==0){
		cout << 1 << endl;
		return 0;
	}

	long int ans=1;
	
	for(int i=0;i<unknown;i++)
		ans*=2,ans%=1000000007;

	cout << ans << endl;
	
	return 0;
}
