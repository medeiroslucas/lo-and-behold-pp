#include <bits/stdc++.h>

using namespace std;

int main() {

  int n_bancos, n_dividas, i, d, c, v;
  int *din;
  bool n;

  while (1) {

    n = false;

    cin >> n_bancos >> n_dividas;

    if(!(n_bancos || n_dividas))break;

    din = (int *) malloc(n_bancos*sizeof(int));

    for(i = 0; i < n_bancos; i++){
      scanf("%d", (din+i));
    }

    for(i = 0; i < n_dividas; i++){
      scanf("%d %d %d",&d, &c, &v);
      *(din+(d-1)) -= v;
      *(din+(c-1)) += v;
    }

    for(i=0; i<n_bancos; i++){
      if( *(din+i) < 0){
        n = true;
        break;
      }
    }
    if(n){
      cout << "N" << endl;
    }else{
      cout << "S" << endl;
    }
    free(din);
  }

  return 0;
}
