#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, b, num, cont=0;
    char estado;
    queue<int> tiros;

    cin >> n;

    for(int i=0; i<n; i++){

        cin >> b;

        for(int j=0; j<b; j++){
            cin >> num;
            tiros.push(num);
        }

        for(int j=0; j<b; j++){
            cin >> estado;

            if((estado == 'S' && tiros.front() <=2) || (estado == 'J' && tiros.front() > 2)){
                cont++;
            }
            tiros.pop();
        }

        cout << cont << endl;
        cont = 0;

    }

    return 0;
}