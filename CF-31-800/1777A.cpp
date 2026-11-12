
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

    if(n==1)
    {
        cout << 0 << '\n';
        return;
    }
    int pos = 1;
    int ans = 0;
    while(pos<n)
    {
        if(a[pos]%2==a[pos+1]%2)
        {
            ans ++;
        }
        pos++;
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


