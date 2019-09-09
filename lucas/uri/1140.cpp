#include<bits/stdc++.h>

using namespace std;

int main(){

    char inicial;
    char outras;
    bool igual, uma_palavra;

    while(1){

        cin >> inicial;
        inicial = toupper(inicial);
        if(inicial == '*') break;
        uma_palavra = true;

        while(1){

            while(1){
                scanf("%c", &outras);
                if(!isalpha(outras)) break;
            }

            if(outras == '\n' && !uma_palavra) break;

            if(outras == '\n' && uma_palavra){
                igual = false;
                cout << "Y" << endl;
                break;
            }

            while(1){
                scanf("%c", &outras);
                if(isalpha(outras)){
                    uma_palavra = false;
                    break;
                } 
            }

            outras = toupper(outras);

            if(inicial == outras){
                igual = true;
            }
            else{
                igual = false;
            }
            if(!igual){

                while(1){
                    scanf("%c", &outras);
                    if(outras == '\n') break;
                }

                cout << "N" << endl;
                break;
            }
        }
        if(igual){
            cout << "Y" << endl;
        }


    }


    return 0;
}