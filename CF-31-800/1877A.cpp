#include<bits/stdc++.h>

using namespace std;
using ll = long long;
void solve() 
{
    int n;cin>>n;
    ll ans = 0;
    for(int i = 1;i<=n-1;++i)
    {
        int x;cin>>x;
        ans+=x;
    }
    cout << -ans << '\n';
}

int main() {
    ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);
    int t;cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}