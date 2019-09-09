#include<bits/stdc++.h>

using namespace std;

int main(){

	int x, y, x_aux, y_aux, curvas_x=0, curvas_y=0;
	vector<pair<int, int>> pontos_curva;

	pair<int, int> a, b, c, d, t;

	t.first=1;
	t.second=0;

	pontos_curva.push_back(t);

	a.first = 0;
	a.second = 0;

	b.first = 0;
	b.second = 0;

	c.first = 0;
	c.second = 0;

	d.first = 0;
	d.second = 0;

	for(int i=0; i < 300; i++){
		a.first++;
		a.second++;

		pontos_curva.push_back(a);

		b.first--;
		b.second++;

		pontos_curva.push_back(b);

		c.first--;
		c.second--;

		pontos_curva.push_back(c);

		d.first++;
		d.second--;
		d.first++;
		pontos_curva.push_back(d);
		d.first--;
	}

	cin >> x >> y;

	x_aux = x;
	y_aux = y;

	if(x > 0){
		if(x==1 && y==0){
			curvas_x = 0;
		}else{
			curvas_x = (4*x)-3;
		}
	}
	else if(x < 0){
		x = abs(x);
		curvas_x = (4*x)-1;
	}
	else if(!x){
		curvas_x = 0;
	}

	if(y <= 0){
		y = abs(y);
		curvas_y = (4*y);
	}
	else if(y > 0){
		curvas_y = (4*y)-2;
	}


	for(auto p:pontos_curva){
		if(x_aux == p.first && y_aux == p.second){
			cout << min(curvas_x, curvas_y) << endl;
			return 0;
		}
	}
	cout << max(curvas_x, curvas_y) << endl;

	return 0;
}
