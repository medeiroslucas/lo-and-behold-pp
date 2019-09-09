#include<bits/stdc++.h>

using namespace std;

int main(){

    long double n, R, r;
    long double teta, aux;

    cin >> n >> R >> r;

    if(r*2 == R && n<=2){
        cout << "YES" << endl;
        return 0;
    }else if(r*2 == R && n>2){
        cout << "NO" << endl;
        return 0;
    }

    if(r*2 >= R && n==1){
        cout << "YES" << endl;
        return 0;
    }else if(r*2 >= R && n!=1){
        cout << "NO" << endl;
        return 0;
    }

    teta = asin(r/(R-r));

    if(teta*2*n*180.0/acos(-1.0) <= 360.0+7e-7){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}