#include<bits/stdc++.h>

using namespace std;

using ll = long long;

const double PI = acos(-1);

const double EPS = 1e-9;

int main(){

    int N, angle;

    cin >> N;

    while(N--){
        cin >> angle;
        if(angle == 60 || angle == 90 || angle == 108 || angle == 144 || angle == 135 || angle == 120 || angle == 150){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}