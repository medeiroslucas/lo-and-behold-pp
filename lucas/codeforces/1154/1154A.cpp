#include<bits/stdc++.h>

using namespace std;

int main(){

    int a, b, c, aux;
    vector<int> num;

    for(int i=0; i<4; i++){
        cin >> aux;
        num.push_back(aux);
    }

    sort(num.begin(), num.end());

    cout << num[3]-num[2] << " " << num[3]-num[1] << " " << num[3]-num[0] << endl;

    return 0;
}