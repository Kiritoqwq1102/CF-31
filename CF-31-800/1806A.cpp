
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()   
{
    int x,y;
    int o,p;
    cin>>x>>y>>o>>p;

    int dis_y = p - y;


    if(dis_y<0)
    {
        cout << -1 << '\n';
        return;
    }

    int ans = 0;

    ans += dis_y;

    x += dis_y;


    if(x<o)
    {
        cout << -1 << '\n';
        return;
    }

    cout << ans+x-o << '\n';
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


