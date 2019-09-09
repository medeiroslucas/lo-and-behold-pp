#include <stdio.h>

int main(){

  int x, y, xpd, ypd;
  int i, j=0;

  while(1){

    scanf("%d", &i);

    if(!i)break;

    scanf("%d %d", &xpd, &ypd);

    for(j = 0 ; j < i; j++){

      scanf("%d %d", &x, &y);

      if(x > xpd && y > ypd){
          printf("NE\n");
      }

      if(x < xpd && y > ypd){
          printf("NO\n");
      }

      if(x < xpd && y < ypd){
          printf("SO\n");
      }

      if(x > xpd && y < ypd){
          printf("SE\n");
      }

      if(x == xpd || y == ypd){
          printf("divisa\n");
      }
    }
  }

  return 0;
}
