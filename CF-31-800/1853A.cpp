#include<bits/stdc++.h>
#include <vector>
//2026.11.11
using namespace std;
using ll = long long;
void solve() 
{
    int n;cin>>n;
    vector<ll>a(n+1);
    for(int i = 1;i<=n;++i)
        cin>>a[i];

    
    for(int i = 1;i<n;++i)
    {
        if(a[i]>a[i+1])
        {
            cout << 0 << '\n';
            return;
        }
    }
    ll ans = 1e9+10;
    for(int i = 2;i<=n;++i)
    {
        ans = min(ans,(a[i]-a[i-1])/2+1);
    }

    cout << ans << '\n';
}


int main() {
    ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);
    int t;cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}