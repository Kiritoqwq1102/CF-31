#include<bits/stdc++.h>

using namespace std;
using ll = long long;
void solve() 
{
    ll n,k;cin>>n>>k;
    if(n%2==0)
    {
        cout << "YES" << '\n';
    }
    else {
        if(n%2==k%2)
            cout << "YES" << '\n';
        else
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