#include <stdio.h>
#include <stdlib.h>

int main() {

  int N, i, cont=0;
  int *H;

  while (1) {

    cont = 0;

    scanf("%d", &N);

    if(!N)break;

    H = (int *) malloc (N*sizeof(int));

    for(i = 0; i<N; i++){
      scanf("%d", H+i);
    }

    for(i = 1; i < N-1; i++){

      if((*(H+i) > *(H+i-1)) && (*(H+i) > *(H+i+1))){
        cont++;
      }

      if((*(H+i) < *(H+i-1)) && (*(H+i) < *(H+i+1))){
        cont++;
      }

      }
      if((*(H+N-1) > *(H+N-2)) && (*(H+N-1) > *(H))){
        cont++;
      }

      if((*(H+N-1) < *(H+N-2)) && (*(H+N-1) < *(H))){
        cont++;
      }

      if((*(H) > *(H+N-1)) && (*(H) > *(H+1))){
        cont++;
      }

      if((*(H) < *(H+N-1)) && (*(H) < *(H+1))){
        cont++;
      }

    printf("%d\n", cont);

    free(H);
  }


  return 0;
}
