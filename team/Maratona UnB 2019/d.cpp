#include<bits/stdc++.h>

using namespace std;


int main(){

	char aux='0';

	int cont_o=0;
	int cont_t=0;

	while(1){
		scanf("%c",&aux);
		if(aux=='\n') return 0;
		if(aux=='O') cont_o++;

		cont_t++;

		
		if(cont_t%3==0 && cont_o%5==0 && cont_o!=0){
			printf("fizzbusao");
			cont_o=0;
		}
		else if(cont_t%3==0) printf("fizz");
		else if(cont_o%5==0 && cont_o!=0){
			cont_o=0;
			printf("busao");
		}
		else printf("%d",cont_t);

		printf("\n");
	}

	return 0;
}
