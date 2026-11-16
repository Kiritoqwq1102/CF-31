
#include <bits/stdc++.h>
#include <utility>
using namespace std;
using ll = long long;

void solve()   
{
    int a,b;
    int x_1,y_1;
    int x_2,y_2;
    cin>>a>>b;
    cin>>x_1>>y_1>>x_2>>y_2;


    int dx[] = {a,a,-a,-a,b,b,-b,-b};
    int dy[] = {b,-b,b,-b,a,-a,a,-a};
    ll ans = 0 ;
    set<pair<int, int>> op;
    for(int i = 0;i<=7;++i)
    {
        int o = x_1+dx[i];
        int p = y_1+dy[i];

        for(int j = 0;j<=7;++j)
        {
            if(x_2+dx[j]==o&&y_2+dy[j]==p)
            {
                op.insert({o,p});
            }
        }
    }

    cout << op.size() << '\n';

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}


