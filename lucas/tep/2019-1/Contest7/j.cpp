#include<bits/stdc++.h>

using namespace std;

int main (){

	int xa, ya, ra, xb, yb, rb;
	double dist;

	cin >> xa >> ya >> ra >> xb >> yb >> rb;
	
	dist = hypot(xa-xb, ya-yb);

	if(dist <= ra+rb && max(ra,rb) <= dist){
		cout << 0 << endl;
		return 0;
	}

	if(dist < ra || dist < rb ){
		if(max(ra, rb) <= dist+min(ra,rb)){
			cout << 0 << endl;
			return 0;
		}
		dist = max(ra, rb) - (dist + min(ra, rb));
	} else{
	
		dist -= ra;
		dist -= rb;

	}
	printf("%.8lf\n", fabs(dist/2));

	return 0;
}
