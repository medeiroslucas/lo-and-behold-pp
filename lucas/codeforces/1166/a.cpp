#include<bits/stdc++.h>

using namespace std;

int pessoas[130];

int main(){

    int n, cont_par=0;
    string aux;
    vector<string> nomes;
    int sala1, sala2;

    cin >> n;

    while(n--){
        cin >> aux;
        pessoas[(int) aux[0]]++;
    }

    for(int i=0; i<130; i++){
        
        if(pessoas[i] > 0){
 
            sala1 = pessoas[i]/2;
            sala2 = pessoas[i] - sala1;

            cont_par += (sala1*(sala1-1))/2;
            cont_par += (sala2*(sala2-1))/2;

        }
    }

    cout << cont_par << endl;

    return 0;
}