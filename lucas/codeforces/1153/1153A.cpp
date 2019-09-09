#include<bits/stdc++.h>

using namespace std;

int main(){

    double n, t, s, d, k, diff;
    int num_min, min = 10000000;    

    cin >> n >> t;

    for(int i=1; i<=n; i++){

        cin >> s >> d;

        if(s < t){
            k = (t-s)/d;
            if(k != (int) k) k = (int) k + 1;
            diff = fabs(t-s-d*k);
        } else{
            diff = s-t;
        }

        if(diff < min){
            min = diff;
            num_min = i;
        }

    }

    cout << num_min << endl;

    return 0;
}
