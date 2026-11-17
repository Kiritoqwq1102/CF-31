#include<bits/stdc++.h>

using namespace std;
using ll = long long;
void solve() 
{
    int n;
    cin>>n;
    string s;cin>>s;
    if(n==1)
    {
        cout << 2 << '\n';
        return;
    }
    ll ans = 0;ll tmp = 1;
    for(int i = 0;i<n-1;++i)
    {
        if(s[i]==s[i+1])
        {
            tmp++;
        }
        else {
            tmp = 1;
        }
        ans = max(tmp,ans);
    }
    cout << ans+1 << '\n';
}

int main() {
    ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);
    int t;cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}