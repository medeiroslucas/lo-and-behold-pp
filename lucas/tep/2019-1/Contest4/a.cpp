#include <bits/stdc++.h>

using namespace std;

//#define pair<int, int> ii
//#define long long ll

const double PI = acos(-1.0);

int main(){

    double d, h, v, e, velo_chu, v_final, volume;

    cin >> d >> h >> v >> e;

    velo_chu = PI*(d/2)*(d/2)*e;

    if(velo_chu >= v){
        cout << "NO" << endl;
        return 0;
    }

    v_final = v - velo_chu;

    volume = PI*(d/2)*(d/2)*h;

    cout << "YES" << endl;
    printf("%.8lf\n", volume/v_final);

    return 0;
}