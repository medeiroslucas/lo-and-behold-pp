#include<bits/stdc++.h>

using namespace std;

int main(){

    unsigned long long int m, c, v, aux_m, aux_c, resto, mdc;
    long long int x, y;
    bool par;
    stack<unsigned long long int> divi, diof;

    cin >> m >> c >> v;

    aux_m = m;
    aux_c = c;

    while(aux_c){
        divi.push(aux_m/aux_c);
        resto = aux_m%aux_c;
        aux_m = aux_c;
        aux_c = resto;
    }

    mdc = aux_m;

    if(v%mdc != 0){
        cout << "-1" << endl;
        return 0;
    }

    divi.pop();
    aux_m = 0;
    aux_c = 1;

    divi.size()%2 == 0 ? par = true : par = false;

    while(divi.size()){
        resto = divi.top()*aux_c + aux_m;
        diof.push(resto);
        aux_m = aux_c;
        aux_c = resto;
        divi.pop();
    }

    if(!diof.empty()){
    y = diof.top();
    //diof.pop();
    //x = diof.top();
    }

    par ? x *= -1 : y *= -1;

    if(x<=0){

    }

    return 0;
}