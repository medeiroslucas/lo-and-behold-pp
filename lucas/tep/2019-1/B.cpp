#include<bits/stdc++.h>

using namespace std;

struct Point{
    int x;
    int y;
};

int det(Point a, Point b, Point c){

    return (a.x*b.y + a.y*c.x + b.x*c.y) - (b.y*c.x + c.y*a.x + b.x*a.y);

}

int main(){

    int n, d, cont=0;
    vector<Point> pontos;
    Point aux;

    cin >> n;

    n++;

    while(n--){
        cin >> aux.x >> aux.y;
        pontos.push_back(aux);
    }

    for(int i=0; i<pontos.size()-2; i++){
        d = det(pontos[i], pontos[i+1], pontos[i+2]);
        if(d>0) cont++;
    }

    cout << cont << endl;

    return 0;
}