#include<bits/stdc++.h>

using namespace std;

int main(){

    int i, a, b, N;
    char c;

    cin >> N;

    for(i = 0; i < N; i++){


        scanf("%d%c%d", &a, &c, &b);

        if(a == b){

            cout << a*b << endl;

        }else if(c <= 90){

            cout << b-a << endl;

        }else if(c > 90){

            cout << a+b << endl;

        }

    }

    return 0;
}