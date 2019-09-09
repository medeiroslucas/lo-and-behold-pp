#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, m, h, aux;
    vector<int> line;
    vector<vector<int>> matrix;

    cin >> n >> m >> h;

    for(int i=0; i<m ; i++){
        cin >> aux;
        line.push_back(aux);
    }

    for(int i=0; i<n; i++){
        matrix.push_back(line);
        cin >> aux; 
        for(int j=0; j<m; j++){
            if(matrix[i][j] > aux) matrix[i][j] = aux;
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> aux;
            if(!aux) matrix[i][j] = 0;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}