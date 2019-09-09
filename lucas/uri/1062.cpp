#include <bits/stdc++.h>

using namespace std;

int main(){

    int aux, a;
    stack<int> estacao;
    queue<int> saida, entrada;

    while(cin >> a, a){

        while(a){

            cin >> aux;
            if(!aux){
                cout << endl;
                break;
            }
            saida.push(aux);
            entrada.push(1);

            for(int i=2; i<=a; i++){
                cin >> aux;
                saida.push(aux);
                entrada.push(i);
            }

            while(entrada.size()){
                estacao.push(entrada.front());
                entrada.pop();

                //cout << estacao.top() << " " << saida.front() << endl;

                while(estacao.top() == saida.front()){
                    //cout << "Entrou no while" << " " << estacao.top() << " " << saida.front() << endl;
                    estacao.pop();
                    saida.pop();

                    if(!estacao.size() || !saida.size())
                        break;
                }
                //cout << "Saiu do While " << entrada.size() << endl;

            }

            //cout << "Chegou aqui" << endl;

            if(!estacao.size())
                cout << "Yes" << endl;

            else
                cout << "No" << endl;

            while(estacao.size()) estacao.pop();

            while(saida.size()) saida.pop();

        }

    }
    return 0;
}