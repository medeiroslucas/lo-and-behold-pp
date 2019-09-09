#include <bits/stdc++.h>

using namespace std;

int main(){

    int NC, k, j;
    queue<int> pessoas;

    while(1){

        cin >> NC;

        if(!NC) break;

        k=1;
        while(1){

            for(j=2; j<=NC; j++){
                pessoas.push(j);
            }

            while(pessoas.size() > 1){
                for(j=0; j<k-1; j++){
                    pessoas.push(pessoas.front());
                    pessoas.pop();
                }
                pessoas.pop();
            }

            if(pessoas.front() == 13){
                cout << k << endl;
                break;
            }
            k++;
            
            pessoas.pop();

        }

    }


    return 0;
}
