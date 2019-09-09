#include <bits/stdc++.h>

using namespace std;

int main(){

    double R1, X1, Y1, R2, X2, Y2;
    double Dis;

    while(cin >> R1 >> X1 >> Y1 >> R2 >> X2 >> Y2){

        Dis = sqrt(pow(X1-X2, 2)+pow(Y1-Y2, 2));

        if(Dis+R2 <= R1){
            cout << "RICO" << endl;
        }
        else{
            cout << "MORTO" << endl;
        }

    }

    return 0;
}