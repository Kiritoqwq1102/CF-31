#include<bits/stdc++.h>
#include <vector>

using namespace std;
using ll = long long;
void solve() 
{
    int n;cin>>n;
    vector<ll> a(n+1);

    ll ans = -1;
    for(int i = 1;i<=n;++i)
    {
        cin>>a[i];
        ans = max(a[i], ans);
    }

    vector<int> x;
    vector<int> y;

    for(int i = 1;i<=n;++i)
    {
        if(a[i]==ans)
            y.push_back(a[i]);
        else
            x.push_back(a[i]);
    }

    if(x.size()==0||y.size()==0)
    {
        cout << -1 << '\n';
        return;
    }
    cout << x.size() << ' ' << y.size() << '\n';

    for(int y : x)
    {
        cout << y << ' ';
    }
    cout << '\n';

    for(int u : y)
    {
        cout << u << ' ';
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);
    int t;cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}