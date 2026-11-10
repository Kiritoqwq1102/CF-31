#include<bits/stdc++.h>
#include <vector>

using namespace std;
using ll = long long;
void solve() 
{
    int n;cin>>n;
    vector<int> a(n+1);
    ll ans = 1000000000;
    for(int i = 1;i<=n;++i)
    {   
        ll x;cin>>x;
        ans = min (ans , abs(x));
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}