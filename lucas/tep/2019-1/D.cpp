#include<bits/stdc++.h>

using namespace std;

int main(){

    double R, d, x, y, r, dist;
    int n, cont=0;

    cin >> R >> d;

    cin >> n;

    while(n--){
        cin >> x >> y >> r;

        dist = hypot(x, y);

        if(dist >= R-d+r && dist+r <= R){
            cont++;
        }
    }

    cout << cont << endl;

    return 0;
}