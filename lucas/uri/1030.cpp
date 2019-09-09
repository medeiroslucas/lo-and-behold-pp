#include <bits/stdc++.h>

using namespace std;

int main(){

    int NC, n, k, j, i;
    queue<int> pessoas;

    cin >> NC;

    for(i=0; i<NC; i++){

        cin >> n >> k;

        for(j=1; j<=n; j++){
            pessoas.push(j);
        }

        while(pessoas.size() > 1){
            for(j=0; j<k-1; j++){
                pessoas.push(pessoas.front());
                pessoas.pop();
            }
            pessoas.pop();
        }

        cout << "Case " << i+1 << ": " << pessoas.front() << endl;

        pessoas.pop();

    }


    return 0;
}
