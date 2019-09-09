#include<bits/stdc++.h>

using namespace std;

int main(){

    int n,m, aux, primera_linha, max=-1, inx_max;
    vector<vector<int>> matrix;
    bitset<32> mat, prim,res;
    vector<int> line;
    bool zero=false;

    cin >> n >> m;

    for(int i=0; i<n; i++){
            matrix.push_back(line);
        for(int j=0; j<m; j++){
            cin >> aux;
            matrix[i].push_back(aux);
        }
    }

    cout << matrix[1][2] << endl;

    for(int i=0; i<m; i++){
        primera_linha = matrix[0][i];
        line.push_back(m);
    
        for(int j=1; j<n; j++){
            
            for(int k=0; k<m; k++){

                prim = primera_linha;
                mat = matrix[j][k];
                res = prim^mat;

                    cout << "     " << j << " " << k << endl;
                    cout << i << " " << primera_linha << " " << matrix[j][k] << endl;
                if( res == 0){
                    zero = true;
                    break;
                }
                if( (int)(res.to_ulong()) > max){
                    max = (int)(res.to_ulong());
                    line.push_back(m);
                }
            }
            if(zero){
                zero = false;
                line.clear();
                break;
            }
            primera_linha = max;
        }
    }

    if(line.empty()){
        cout << "NIE" << endl;
    }else{
        cout << "TAK" << endl;
        cout << line[0];
        for(int i=1; i<line.size(); i++){
            cout << " " << line[i];
        }
        cout << endl;
    }

    return 0;
}