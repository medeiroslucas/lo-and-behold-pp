#include <bits/stdc++.h>

using namespace std;

int main(){

  int N, i, j, cr, ind;
  int nivel[5];

  while(1){

    scanf("%d", &N);

    if(!N)break;

    for(j = 0; j < N; j++){
      cr = 0;
      ind = 0;

      for(i = 0; i < 5; i++){
        scanf("%d", &nivel[i]);
        if(nivel[i] <= 127){
          ind = i;
          cr += 1;
        }
      }
      if(cr != 1){
        cout << "*" << endl;
      }
      if(cr == 1){

        switch (ind) {
          case 0:
            cout << "A" << endl;
            break;

          case 1:
            cout << "B" << endl;
            break;

          case 2:
            cout << "C" << endl;
            break;

          case 3:
            cout << "D" << endl;
            break;

          case 4:
            cout << "E" << endl;
            break;
        }
      }
    }
  }

  return 0;
}
