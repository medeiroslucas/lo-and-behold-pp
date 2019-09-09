#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, i;
    string number;
    vector<char> tran;
    char aux;
    string ans="";

    tran.push_back('0');

    cin >> n >> number;

    for(int i=0; i<9; i++){
        cin >> aux;
        tran.push_back(aux);
    }

    for(i=0; number[i] >= tran[number[i]-'0']; i++){
    }

    for(i; number[i] <= tran[number[i]-'0']; i++){
        number[i] = tran[number[i]-'0'];
    }

    cout << number << endl;

    return 0;
}