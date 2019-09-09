#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m, num, cont = 0;
    vector<int> ingressos;

    while(cin >> n >> m, n || m){

        for(int i=0; i<=n; i++){
            ingressos.push_back(0);
        }

        for(int i=1; i<=m; i++){
            cin >> num;
            ingressos.at(num)++;
        }

        for(int i=1; i <= n; i++){
            if(ingressos.at(i) > 1){
                cont++;
            }
        }

        cout << cont << endl;

        ingressos.clear();
        cont = 0;
    }


    return 0;
}