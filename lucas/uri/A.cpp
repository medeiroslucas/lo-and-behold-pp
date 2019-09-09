#include <bits/stdc++.h>

using namespace std;

int main(){

    int p, s, t, n, size_simples=0, size_dupla=0;
    float porcentagem;

    cin >> p >> s >> t >> n;

    size_simples = n * (p+t) + p + s;

    size_dupla = n * (2*p + t) + 2*p + s;

    porcentagem = (1 - (float)size_simples/(float)size_dupla)*100;

    printf("%.2f\n", porcentagem);

    return 0;
}