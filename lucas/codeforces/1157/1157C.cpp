#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, aux, cont_ini=0, cont_fim;
    vector<int> in;
    string ans="";
    vector<int> sec;

    cin >> n;

    cont_fim = n-1;

    for(int i=0; i<n; i++){
        cin >> aux;
        in.push_back(aux);
    }

    if(in[cont_ini] < in[cont_fim]){
        ans += 'L';
        sec.push_back(in[cont_ini]);
        cont_ini++;
    }else{
        ans += 'R';
        sec.push_back(in[cont_fim]);
        cont_fim--;
    }

    while(1){

        if(in[cont_ini] < sec[sec.size()-1] && in[cont_fim] < sec[sec.size()-1]){
            break;
        }

        if(cont_ini == cont_fim && in[cont_ini] > sec[sec.size()-1]){
            ans += 'L';
            break;
        }else if(cont_ini == cont_fim && in[cont_ini] < sec[sec.size()-1]){
            break;
        }

        if(in[cont_ini] > sec[sec.size()-1] && in[cont_fim] > sec[sec.size()-1]){

            if(in[cont_ini] < in[cont_fim]){
                ans += 'L';
                sec.push_back(in[cont_ini]);
                cont_ini++;
            }else{
                ans += 'R';
                sec.push_back(in[cont_fim]);
                cont_fim--;
            }

        } else if(in[cont_ini] > sec[sec.size()-1]){
            ans += 'R';
            sec.push_back(in[cont_fim]);
            cont_fim--; 
        } else if(in[cont_fim] > sec[sec.size()-1]){
            ans += 'R';
            sec.push_back(in[cont_fim]);
            cont_fim--; 
        }        

    }

    cout << ans.size() << endl;
    cout << ans << endl;

    return 0;
}