#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, i, m, r, aux;
    int perc;
    priority_queue<pair<long, long>> fila;
    cin >> n;

    for(int j =0; j<n; j++){

        cin >> aux;

        if(aux == 1){
            cin >> i >> m >> r;
            perc = r*1e4/m;
            fila.emplace(-perc, -i);
        }

        if(aux == 2){
            auto aux2 = fila.top();
            cout << -aux2.second << endl;
            fila.pop();
        }
    }


    return 0;
}