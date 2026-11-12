#include<bits/stdc++.h>

using namespace std;
using ll = long long;
void solve() 
{
    int n;
    int a,b;cin>>n>>a>>b;
    if(a==b&&b==n)
    {
        cout << "Yes" <<'\n';
        return;
    }

    if(n-a-b>1)
    {
        cout << "Yes" <<'\n';
    }
    else
    {
        cout << "No" <<'\n';
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