#include <bits/stdc++.h>

using namespace std;

int main(){

    int i;

    while(cin >> i){
        if(!(i%6)){
            cout << "Y" << endl;
        }
        else{
            cout << "N" << endl;
        }
    }

    return 0;
}