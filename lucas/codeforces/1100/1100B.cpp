#include<bits/stdc++.h>

using namespace std;

int main(){

    int n,m,num, i;
    vector<int> indx;
    bitset<100000> verify;
    string ans="";

    indx.push_back(0);

    cin >> n >> m;

    for(i=1; i<=n; i++){
        indx.push_back(0);
        verify[i] = 1;
    }

    while(m--){
        cin >> num;
        indx[num]++;
        verify[num] = 0;

        if(verify == 0){
            ans += "1";
            i=0;
            while(i<indx.size()){
                indx[i+1]--;
                if(indx[i+1] == 0){
                    verify[i+1] = 1;
                }
                i++;
            }
        }else{
            ans += "0";
        }

    }
    
    cout << ans << endl;

    return 0;
}