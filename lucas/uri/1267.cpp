#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, d, num;
    vector<int> alunos;
    bool verifica=false;

    while(cin >> n >> d, n || d){

        for(int i=0; i<n; i++){
            alunos.push_back(0);
        }

        for(int i=0; i<d; i++){
            for(int j=0; j<n; j++){
                cin >> num;
                alunos.at(j) = alunos.at(j) + num;
            }
        }

        for(unsigned int i=0; i<alunos.size(); i++){
            if(alunos.at(i) == d){
                cout << "yes" << endl;
                verifica=true;
                break;
            }
        }

        if(!verifica) cout << "no" << endl;

        alunos.clear();
        verifica = false;

    }


    return 0;
}