#include<bits/stdc++.h>

using namespace std;

long long solve(long long a, long long b){

	if(b==1) return a;

	return (a/b) + solve(b,a%b);
}


int main(){


long long int a,b;

cin >> a >> b;

cout << solve(a,b) << endl;


return 0;
} 
