#include<bits/stdc++.h>

using namespace std;

int f(int x){
    float aux = x+1;

    while(aux/10 == (int) aux/10){
        aux = aux/10;
    }
    return aux;
}

int main(){

    int n, first;
    set<int> numbers;

    cin >> n;

    first = n;


    auto a = numbers.insert(0);

    do{

        a = numbers.insert(n);
        
        n = f(n);


    }while(a.second);

    cout << numbers.size()-1 << endl;

    return 0;
}