#include<bits/stdc++.h>

using namespace std;

int v[20], d[100100];
set<int> t;
int x, y, z;

int main(){

    int ans = 0;
    for (int i = 0; i < 6; i++){
        scanf("%d", &v[i]);
        d[v[i]]++;
        t.insert(v[i]);
    }

    for(int l : t){
        if(!x){ 
            x = l;
            continue;
        }
        if(!y){ 
            y = l;
            continue;
        }
        if(!z){ 
            z = l;
            continue;
        }
    }

    if(t.size() == 2){
        while((x||y)){

            int sum = !!x + !!y;

            ans += 3*(x+y) - (x-1 + y-1)*(sum);

            printf("%d\n", sum);

            if(x) x--;
            if(y) y--;
        }
        printf("%d\n", ans);

        return 0;    
    }

    if(t.size() == 1){
        y = x;
        z = x;
    }

    while((x||y)&&(x||z)&&(y||z)){

        int sum = !!x + !!y + !!z;

        ans += 4*(x+y+z)-2*(sum);

        printf("%d\n", sum);

        if(x) x--;
        if(y) y--;
        if(z) z--;
    }


    printf("%d\n", ans );

    return 0;
}