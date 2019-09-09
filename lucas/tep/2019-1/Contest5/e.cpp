#include<bits/stdc++.h>

using namespace std;

struct Point{
    int x, y;
    char pol;

    Point(int _x, int _y, char _pol): x(_x), y(_y), pol(_pol) {};

    bool operator<(const Point& P) const{
        return x == P.x ? y < P.y : x < P.x;
    }
};

int D(const Point P, const Point Q, const Point R){
    return (P.x*Q.y + P.y*R.x + Q.x*R.y) - (R.x*Q.y + R.y*P.x + Q.x*P.y);
}

vector<Point> monotone_chain(const vector<Point> points){

    vector<Point> P(points);

    sort(P.begin(), P.end());

    vector <Point> lower, upper;

    for(const auto p : P){
        auto size = lower.size();

        while(size >= 2 and D(lower[size-2], lower[size-1], p) < 0){
            lower.pop_back();
            size = lower.size();
        }

        lower.push_back(p);

    }

    reverse(P.begin(), P.end());

    for(const auto p : P){
        auto size = upper.size();

        while(size >= 2 and D(upper[size-2], upper[size-1], p) < 0){
            upper.pop_back();
            size = upper.size();
        }

        upper.push_back(p);

    }    

    lower.pop_back();
    lower.insert(lower.end(), upper.begin(), upper.end());

    return lower;

}

int main(){

    int M, N, x, y;
    vector<Point> points, ch;

    cin >> M;

    while(M--){
        cin >> x >> y;
        points.push_back(Point(x, y, 'A'));
    }

    cin >> N;

    while(N--){
        cin >> x >> y;
        points.push_back(Point(x, y, 'B'));
    }

    ch = monotone_chain(points);

    for(auto p : ch){
        if(p.pol == 'B'){
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}