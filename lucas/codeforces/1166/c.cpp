#include<bits/stdc++.h>

using namespace std;

int main(){

    long long int n, aux, ans=0, pos;
    vector<long long int> numero;

    cin >> n;

    while(n--){
        cin >> aux;
        numero.push_back(abs(aux));
    }

    sort(numero.begin(), numero.end());

    for(int i=0; i<numero.size(); i++){
        auto p = upper_bound(numero.begin(), numero.end(), 2*numero[i]);
        pos = p-numero.begin();
        if(numero[pos] != 2*numero[i]) pos--;
        //cout << i << " " << pos << endl;
        ans += pos-i;
    }

    cout << ans << endl;

    return 0;
}