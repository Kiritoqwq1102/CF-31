#include<bits/stdc++.h>
#include <vector>

using namespace std;
using ll = long long;
void solve() 
{
    int n,q;cin>>n>>q;
    vector<int>a(n+1);
    for(int i = 1;i<=n;++i)
        cin>>a[i];
    
    vector<ll> pre(n+1);
    for(int i = 1;i<=n;++i)
    {
        pre[i] = pre[i-1]+a[i];
    }
    while(q--)
    {
        int l,r,k;
        cin>>l>>r>>k;
       ll p = pre[n] - (pre[r] - pre[l - 1]) + 1LL * (r - l + 1) * k;
        if(p%2!=1)
        {
            cout << "NO" << '\n';
        }else
            cout << "YES"<< '\n';
    }
}

int main() {
    ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);
    int t;cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}