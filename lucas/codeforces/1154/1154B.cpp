#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, a=-1, b=-1, aux, x, dif, num_medio;
    vector<int> num;
    set<int> diferenca;
    set<int> digitos;

    cin >> n;

    aux = n;

    while(aux--){
        cin >> x;
        num.push_back(x);
        digitos.insert(x);
    }

    if(digitos.size() == 1){
        cout << "0" << endl;
        return 0;
    }else if(digitos.size() == 3)
    
    for(aux=0; aux<n-1; aux++){
        dif = abs(num[aux]-num[aux+1]);
        diferenca.insert(dif);
    }

    num.clear();

    for(auto p:diferenca){
        cout << p << endl;
        num.push_back(p);
    }

    return 0;
}