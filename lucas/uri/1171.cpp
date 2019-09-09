#include<bits/stdc++.h>

using namespace std;

int main(){

    int N, i, min=2001, numanterior=0, cont=0;
    int *numeros;

    cin >> N;

    numeros = (int *) malloc(N*sizeof(int));

    for(i = 0; i<N; i++){
        cin >> *(numeros+i);
    }

    while(1){

        cont = 0;

        for(i=0; i<N; i++){
            if(*(numeros+i) < min && *(numeros+i) > numanterior){

                min = *(numeros+i);
                cont = 1;

            }
            else if(*(numeros+i) == min){

                cont++;

            }
        }
        if(min == 2001)return 0;

        cout << min << " aparece " << cont << " vez(es)" << endl;

        numanterior = min;
        min = 2001;


    }

    return 0;
}