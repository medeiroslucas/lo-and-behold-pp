#include <bits/stdc++.h>

using namespace std;

int main(){

    int p, n, marcador, aux;
    stack<int> aumentos;

    cin >> p >> n;

    for(int i = 0; i<n; i++){

        cin >> marcador >> aux;

        if(marcador == 1){
            p += aux;
            aumentos.push(aux);
        }

        if(marcador == 2){
            for(int j=0; j<aux; j++){
                p -= aumentos.top();
                aumentos.pop();
            }
        }


    }

    cout << p << endl;

    return 0;
}