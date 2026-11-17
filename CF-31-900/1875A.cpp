
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()   
{
    int a,b,n;
    cin>>a>>b>>n;

    ll ans = b;
    for(int i = 1;i<=n;++i)
    {
        int x;cin>>x;
        ans += min(a-1,x);
    }
    cout << ans << '\n';

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


