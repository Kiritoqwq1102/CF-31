
#include <bits/stdc++.h>
#include <vector>
using namespace std;
using ll = long long;

void solve()   
{
    int n;cin>>n;
    vector<int> a(n+1);
    for(int i = 1;i<=n;++i)
        cin>>a[i];

    ll ans = 0;
    for(int i = 1;i<=n;++i)
    {
        if(a[i]!=0)
        {
            ans ++;
            while(a[i]!=0&&i<=n)
            {
                i++;
            }
        }
    }
    ans = min(1LL*2,ans);
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


