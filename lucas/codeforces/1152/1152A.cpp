#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, m, aux, cont_chest_par=0, cont_chest_impar=0, cont_key_par=0, cont_key_impar=0;
    int cont=0;

    cin >> n >> m;

    while(n--){
        cin >> aux;
        if(aux%2 == 0){
            cont_chest_par++;
        }else{
            cont_chest_impar++;
        }
    }

    while(m--){
        cin >> aux;
        if(aux%2 == 0){
            cont_key_par++;
        }else{
            cont_key_impar++;
        }
    }

    cont += min(cont_chest_par, cont_key_impar);
    cont += min(cont_chest_impar, cont_key_par);

    cout << cont << endl;

    return 0;
}