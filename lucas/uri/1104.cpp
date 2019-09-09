#include <bits/stdc++.h>

using namespace std;

int main(){

    unsigned int na, nb, carta, idxfinalvector=0, cont;
    vector<unsigned int> ca, cb;

    while(1){
        cin >> na >> nb;
        if(!(na || nb)) break;
    
        cin >> carta;
        ca.push_back(carta);
        idxfinalvector = 0;
        for(unsigned int i=1; i<na; i++){
            cin >> carta;
            if(carta != ca[idxfinalvector]){
                ca.push_back(carta);
                idxfinalvector++;
            }
        }

        cin >> carta;
        cb.push_back(carta);
       idxfinalvector = 0; 
        for(unsigned int i=1; i<nb; i++){
            cin >> carta;
            if(carta != cb[idxfinalvector]){
                cb.push_back(carta);
                idxfinalvector++;
            }
        }

        cont = 0;

        if(ca.size() <= cb.size()){
            for(unsigned int i = 0; i< ca.size(); i++){
                if(!binary_search(cb.begin(), cb.end(), ca[i])){
                    cont++;
                }
            }
        }
        else{
              for(unsigned int i = 0; i< cb.size(); i++){
                if(!binary_search(ca.begin(), ca.end(), cb[i])){
                    cont++;
                }
            }          
        }

        cout << cont << endl;
        cont = 0;
        ca.clear();
        cb.clear();
    
    }

    return 0;
}