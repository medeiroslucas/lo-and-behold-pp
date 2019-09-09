#include<bits/stdc++.h>

using namespace std;

struct Point{
    long long int x, y;

    Point(long long int _x, long long int _y): x(_x), y(_y) {};

    bool operator<(const Point& P) const{
        return x == P.x ? y < P.y : x < P.x;
    }

	bool operator==(const Point& P) const{
		return x == P.x && y == P.y;
	}

};

struct Vector{

	long long int x, y;

	Vector(const Point& A, const Point& B) 
		: x(B.x -A.x), y(B.y-A.y) {}

	double length(){
		return hypot(x, y);
	}

};

double angle(Vector u, Vector v){

	auto lu = u.length();
	auto lv = v.length();
	auto prod = u.x*v.x + u.y*v.y;

	return acos(prod/(lu*lv));

}
	
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

const double EPS = 1e-7;

int main(){

	long long int N, cont=0;
	Point aux(0, 0);
	vector<Point> points, ch;

	cin >> N;

	for(int i=1; i<=N; i++){
		cin >> aux.y;
		aux.x = i;

		points.push_back(aux);
	}


	ch = monotone_chain(points);


	if(ch.size() > 4){
		cout << "No" << endl;	
		return 0;
	}

	Vector vetor1(ch[0], ch[1]);
	Vector vetor2(ch[2], ch[3]);

	if(angle(vetor1, vetor2) > EPS){
		//delete &vetor1;
		//delete &vetor2;

		//Vector vetor1(ch[0], ch[3]);
		//Vector vetor2(ch[1], ch[2]);

		if(angle(vetor1, vetor2) > EPS){
			cout << "Cheguei aqui" << endl;
		}
	}

	for(auto p:points){
		Vector vetor3(ch[0], p);

		if(angle(vetor3, vetor1) < EPS){
			cont++;
		}

		Vector vetor4(ch[1], p);

		if(angle(vetor4, vetor2) < EPS){
			cont++;
		}
	}	

	if(cont == N){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}

    return 0;
}
