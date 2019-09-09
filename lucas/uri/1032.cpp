#include <bits/stdc++.h>

using namespace std;

int main(){

    int  n, k, j;
    queue<int> pessoas;
    vector<int> primos;

    primos.push_back(2);

    for(int i=3; i <= 35000; i+=2){
        primos.push_back(i);
    }

    for(int i=3; i<=(int) sqrt(35000); i++){
        for(unsigned int j=i+1; j<primos.size(); j++){
            if(primos[j]%i == 0){
                primos.erase(primos.begin()+j);
            }
        }
    }

    while(1){

        cin >> n;

        k=0;

        if(!n) break;

        for(j=1; j<=n; j++){
            pessoas.push(j);
        }

        while(pessoas.size() > 1){

            for(j=0; j<primos[k]-1; j++){
                pessoas.push(pessoas.front());
                pessoas.pop();
            }
            pessoas.pop();
            k++;
        }

        cout << pessoas.front() << endl;

        pessoas.pop();

    }

    return 0;
}
