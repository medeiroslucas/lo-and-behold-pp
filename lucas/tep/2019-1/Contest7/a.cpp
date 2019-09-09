#include<bits/stdc++.h>

using namespace std;

struct Point{
    unsigned long long int x, y;

    Point(unsigned long long int _x, unsigned long long int _y): x(_x), y(_y) {};

	float angle(){
		return atan((double)y / (double)x);
	}

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

vector<Point> monotone_chain(const vector<Point> points){

    vector<Point> P(points);

    sort(P.begin(), P.end());

    vector <Point> lower, upper;

    for(const auto p : P){
        auto size = lower.size();

        while(size >= 2 and D(lower[size-2], lower[size-1], p) <= 0){
            lower.pop_back();
            size = lower.size();
        }

        lower.push_back(p);

    }

    reverse(P.begin(), P.end());

    for(const auto p : P){
        auto size = upper.size();

        while(size >= 2 and D(upper[size-2], upper[size-1], p) <= 0){
            upper.pop_back();
            size = upper.size();
        }

        upper.push_back(p);

    }    
	
    lower.pop_back();
    lower.insert(lower.end(), upper.begin(), upper.end());

    return lower;

}

int main() {

	int N;
	double a=-1, b;
	unsigned long long int x, y, max=0;
	vector<Point> points;
	vector<Point> ch;
	Point point_max(0, 0);

	cin >> N;

	while(N--){
		cin >> x >> y;
		Point aux(x, y);
		points.push_back(aux);
	}

	ch = monotone_chain(points);

	double dut = sqrt(2)/2;

	for(auto p:ch){
		b = p.y - (a*p.x);
		if(b > max){
			max = b;
			point_max = p;
		}
	}


	cout << max << endl;

	return 0;
}
