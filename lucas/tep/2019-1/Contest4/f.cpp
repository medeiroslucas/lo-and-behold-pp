#include<bits/stdc++.h>

using namespace std;

const double PI = acos(-1.0);
const double oo = 100000000;

int main(){

    int N;
    double max=-oo, min=oo, area;
    pair<double, double> p, pontos;

    cin >> N >> p.first >> p.second;

    while(N--){

        cin >> pontos.first >> pontos.second;

        if(hypot(p.first - pontos.first, p.second - pontos.second) > max){
            max = hypot(p.first - pontos.first, p.second - pontos.second);
        }
        if(hypot(p.first - pontos.first, p.second - pontos.second) < min){
            min = hypot(p.first - pontos.first, p.second - pontos.second);
        }

    }

    area = PI*(max*max - min*min);

    printf("%.10lf\n", area);

    return 0;
}