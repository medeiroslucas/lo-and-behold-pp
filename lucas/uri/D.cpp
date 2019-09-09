#include <bits/stdc++.h>

using namespace std;

int main(){

    int x, y, z, m, n, aux;
    char cupins;
    vector<int> taman;
    bool novo = true;

    cin >> x >> y >> z >> m >> n;

    taman.push_back(m);

    for(int i=0; i<n; i++){
        cin >> cupins;

        if(cupins == 'F') aux = x;

        if(cupins == 'A') aux = y;

        if(cupins == 'R') aux = z;

        for(unsigned int j=0; j<taman.size(); j++){
            if(taman.at(j) >= aux){
                //cout << taman.at(j) << endl;
                taman.at(j) -= aux;
                novo = false;
                break;
            }
        }

        if(novo){
            taman.push_back(m-aux);
        }
        novo = true;
    }

    cout << taman.size() << endl;

    return 0;
}