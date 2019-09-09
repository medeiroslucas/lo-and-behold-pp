#include<bits/stdc++.h>

using namespace std;


struct Point{
    long long int x, y;
	bool base;

    Point(long long int _x, long long int _y): x(_x), y(_y) {};

    bool operator<(const Point& P) const{
        return x == P.x ? y < P.y : x < P.x;
    }

	bool operator==(const Point& P) const{
		return x == P.x && y == P.y;
	}

};

long long int D(const Point P, const Point Q, const Point R){
    return (P.x*Q.y + P.y*R.x + Q.x*R.y) - (R.x*Q.y + R.y*P.x + Q.x*P.y);
}

int main(){

	long long int x, y;
	
	cin >> x >> y;

	Point a(x,y);

	cin >> x >> y;

	Point b(x,y);

	cin >> x >> y;

	Point c(x, y);

	auto det = D(a, b, c);

	if(!det) cout << "TOWARDS" << endl;

	if(det < 0) cout << "RIGHT" << endl;

	if(det > 0) cout << "LEFT" << endl;


	return 0;
}
