#include<bits/stdc++.h>

using namespace std;

int main(){

	double pi, r, n, R;

	cin >> n >> r;

	pi = acos(-1.0);

	R = (r*sin(pi/n))/(1-sin(pi/n));

	printf("%.8lf\n", R); 

	return 0;
}
