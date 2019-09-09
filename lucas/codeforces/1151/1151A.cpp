#include<bits/stdc++.h>

using namespace std;

int dif(char a, char b){

    int test =abs(a - b);
    if(test > 13) test = 26-test;

    return test;
}

int main(){

    int n, pos, cont=0, min=1000000;
    string in;
    string gem = "ACTG";
    bool sub=false;

    cin >> n >> in;

    for(int i=0; i<n-3; i++){
        cont += dif(in[i], 'A');
        cont += dif(in[i+1], 'C');
        cont += dif(in[i+2], 'T');
        cont += dif(in[i+3], 'G');
        if(cont < min) min = cont;
        cont = 0;
    }

    cout << min << endl;

    return 0;
}