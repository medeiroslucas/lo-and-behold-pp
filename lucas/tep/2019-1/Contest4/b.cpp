#include<bits/stdc++.h>

using namespace std;

int main(){

    int N, aux;
    vector<int> pedacos;

    cin >> N;

    while(N--){
        cin >> aux;
        pedacos.push_back(aux);
    }

    sort(pedacos.begin(), pedacos.end());

    aux = 0;

    for(int i=0; i<pedacos.size()-1; i++){
        aux += pedacos[i];
    }

    //cout << aux << " " << pedacos[pedacos.size()-1] << endl;

    cout << abs(aux-pedacos[pedacos.size()-1])+1 << endl;

    return 0;
}