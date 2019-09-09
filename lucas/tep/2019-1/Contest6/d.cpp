#include<bits/stdc++.h>

using namespace std;

struct Point{
    int x, y;
	bool base;

    Point(int _x, int _y, bool _base): x(_x), y(_y), base(_base) {};

    bool operator<(const Point& P) const{
        return x == P.x ? y < P.y : x < P.x;
    }

	bool operator==(const Point& P) const{
		return x == P.x && y == P.y;
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

int main(){

    int d, n, num_poits, x_aux, y_aux;
    vector<Point> base, ch;
	bool no, is_corner;

    cin >> n >> d;

	Point point(0, d, true);

	base.push_back(point);

	point.x = d;
	point.y = 0;

	base.push_back(point);

	point.x = n;
	point.y = n-d;

	base.push_back(point);

	point.x = n-d;
	point.y = n;

	base.push_back(point);

	cin >> num_poits;

	while(num_poits--){
	
		is_corner = false;

		cin >> x_aux >> y_aux;

		ch = base;

		point.x = x_aux;
		point.y = y_aux;
		point.base = false;

		for(auto p:base){
			if(p == point){
				is_corner = true;
			}
		}

		if(is_corner){
			cout << "YES" << endl;
			ch.clear();
			continue;
		}

		ch.push_back(point);

		ch = monotone_chain(ch);

		no = false;

		for(auto p:ch){
			if(!p.base){
				no = true;
			}
		}

		if(no){
			cout << "NO" << endl;
		}else{
			cout << "YES" << endl;
		}

		ch.clear();
	}

    return 0;
}
