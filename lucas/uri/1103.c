#include <stdio.h>
#include <stdlib.h>

int main(){

    int hi, mi, hf, mf;
    int dm = 0;
    int dh = 0;

    while (1) {
      /* code */

    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    if(!(hi||mi||hf||mf)){
      break;
    }

    if(hf > hi){
        dh = hf - hi;
    }
    else {
        dh = 24 - (hi - hf);
    }

    if( mf > mi){
        dm = mf - mi;
    }
    else{
        dh = dh - 1;
        dm = 60 - (mi - mf);
    } // 3:30 20:20
    if(dm == 60){
        dh += 1;
        dm = 0;
    }
    if(dh == 24 && dm != 0){
        dh = 0;
    }
    printf("%d\n", dh*60+dm);
  }

  return 0;
}
