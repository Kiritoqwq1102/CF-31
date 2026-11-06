#include<bits/stdc++.h>
#include <vector>
//2026.11.5
using namespace std;
using ll = long long;
void solve() 
{
    int n,k;cin>>n>>k;
    vector<int> a(n+1);
    for(int i = 1;i<=n;++i)
    {
        cin>>a[i];
    }
    if(k==1)
    {
        for(int i = 1;i<n;++i)
        {
            if(a[i]>a[i+1])
            {
                cout << "NO" << '\n';
                return;
            }
        }
    }
    cout << "YES" << '\n';
}

int main() {
    ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);
    int t;cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}