#include<bits/stdc++.h>
#include <vector>
//2026.11.9

using namespace std;
using ll = long long;
void solve() 
{
    int n,m;cin>>n>>m;
    vector<int> a(n+1);
    for(int i = 1;i<=n;++i)
    {
        cin>>a[i];
    }
    for(int i = 1;i<=n;++i)
    {
        if(a[i]==m)
        {
            cout << "YES" << "\n";
            return;
        }
    }
    cout <<  "NO" << '\n';
}

int main() {
    ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);
    int t;cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}