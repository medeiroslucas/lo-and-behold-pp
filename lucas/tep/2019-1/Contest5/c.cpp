#include<bits/stdc++.h>

using namespace std;

const double EPS = 1e-9;

bool equals(double a, double b){

    return fabs(a-b) < EPS;
}

int main(){

    double r, x, y, x1, y1, dist, aux;
    int moves=0;

    cin >> r >> x >> y >> x1 >> y1;

    dist = hypot(x-x1, y-y1);

    moves += dist/(r*2);

    aux = moves;

    if(aux == dist/(r*2)){
        cout << moves << endl;
    }else{
        cout << (moves+1) << endl;
    }

    return 0;
}