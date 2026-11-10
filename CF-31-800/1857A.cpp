#include<bits/stdc++.h>
#include <vector>

using namespace std;
using ll = long long;
void solve() 
{
    int n;cin>>n;
    ll sum = 0;
    for(int i = 1;i<=n;++i)
    {
        int x;cin>>x;
        sum+=x;
    }
    if(sum%2==0)
    {
        cout << "YES" << '\n';
    }else
    {
        cout << "NO" << '\n';
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