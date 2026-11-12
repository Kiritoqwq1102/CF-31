#include<bits/stdc++.h>
#include <vector>

using namespace std;
using ll = long long;
void solve() 
{
    int n;cin>>n;
    vector<int> a(n+1);
    for(int i = 1;i<=n;++i)
    {
        int x;cin>>x;
        cout << n+1-x << ' ';
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