#include<bits/stdc++.h>
#include <unistd.h>
#include <vector>

using namespace std;
using ll = long long;
int n;

void solve() 
{
    cin>>n;
    vector<int> a(n+1);
    for(int i = 1;i<=n;++i)
        cin>>a[i];
    int ans =0 ;
    for(int i = 1;i<=n;++i)
    {
        int ins = abs(a[i]-i);
        ans = __gcd(ans,ins);
    }
    cout << ans <<'\n';

}

int main() {
    ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);
    int t;cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}