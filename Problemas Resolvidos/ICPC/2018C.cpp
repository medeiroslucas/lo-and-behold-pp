#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int,null_type,greater<int>,rb_tree_tag,tree_order_statistics_node_update>
statisticsTree;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

	long long x,y;
    long long h,v;

    cin >> x >> y >> h >> v;

    vector<pair<int, int>> horizontais(h), verticais(v);

    for(auto &it : horizontais)
        cin >> it.first >> it.second;

    sort(horizontais.begin(), horizontais.end());

    for(auto &it : verticais)
        cin >> it.first >> it.second;

    sort(verticais.begin(), verticais.end());

    long long r = (h + 1) * (v + 1);

    statisticsTree th, tv;

    for(auto &it : horizontais)
    {
        r += th.order_of_key(it.second);

        th.insert(it.second);
    }

    for(auto &it : verticais)
    {
        r += tv.order_of_key(it.second);

        tv.insert(it.second);
    }

    cout << r << endl;
}
