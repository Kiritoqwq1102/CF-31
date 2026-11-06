#include <algorithm>
#include<bits/stdc++.h>
#include <vector>
//2026.11.6
using namespace std;
using ll = long long;
void solve() 
{
    int n,x;cin>>n>>x;
    vector<int>a(n+2);
    a[0] = 0;
    for(int i = 1;i<=n;++i)
    {
        cin>>a[i];
    }
    a[n+1] = x;
    vector<int> diff(n+2);
    for(int i = 1;i<=n;++i)
    {
        diff[i] = a[i]-a[i-1];
        // cout << diff[i] <<' ';
    }
    diff[n+1] = 2*(a[n+1]-a[n]);
    // cout << diff[n+1];
    sort(diff.begin()+1,diff.end());

    cout << diff[n+1] <<'\n';

}

int main() {
    ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);
    int t;cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}