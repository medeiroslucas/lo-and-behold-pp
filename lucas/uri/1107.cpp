#include <bits/stdc++.h>

using namespace std;

int main(){

    bool laser;
    vector<int> bruto, saida;
    int altura, largura, j, i, aux, cont;

    while(1){

        laser = false;
        cont = 0;

        cin >> altura >> largura;
        if(!(altura || largura)) break;

        for(i = 0; i < largura; i++){
            bruto.push_back(altura);
            cin >> aux;
            saida.push_back(aux);
        }

        for(j = 0 ; j < altura; j++){
            laser = false;
            for(i = 0; i < largura; i++){
                if(bruto[i] > saida[i] && !laser){
                    laser = true;
                    bruto[i]--;
                    cont++;
                } else if(bruto[i] > saida[i] && laser){
                    bruto[i]--;
                }
                else {
                    laser = false;
                }
            }
        }
        cout << cont << endl;

        bruto.clear();
        saida.clear();

    }

    return 0;
}