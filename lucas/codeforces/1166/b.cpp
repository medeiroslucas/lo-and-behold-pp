#include<bits/stdc++.h>

using namespace std;

char matriz[10000][10000];

char base[5][5] = {'a', 'e', 'i' ,'o' ,'u',
                   'e', 'i', 'o', 'u', 'a',
                   'i', 'o', 'u', 'a', 'e', 
                   'o', 'u', 'a', 'e', 'i',
                   'u', 'a', 'e', 'i', 'o'};

int main(){

    int k, m=-1, n=-1;

    cin >> k;

    if(k<25){
        cout << "-1" << endl;
        return 0;
    }

    for(int i=5; i<=sqrt(k); i++){
        if(k%i == 0){
            m = i;
            n = k/i;
            break;
        }
    }

    if(m==-1){
        cout << "-1" << endl;
        return 0;
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            matriz[i][j] = base[i][j];
        }
    }

    for(int i=5; i<m; i++){
        matriz[i][0] = 'a';
        matriz[i][1] = 'e';
        matriz[i][2] = 'i';
        matriz[i][3] = 'o';
        matriz[i][4] = 'u';
    }

    for(int i=5; i<n; i++){
        matriz[0][i] = 'a';
        matriz[1][i] = 'e';
        matriz[2][i] = 'i';
        matriz[3][i] = 'o';
        matriz[4][i] = 'u';
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if((int)matriz[i][j] == 0){
                cout << "c";
            }else{
                cout << matriz[i][j];
            }
        }
    }

    cout << endl;

    return 0;
}