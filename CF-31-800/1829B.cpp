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
        cin>>a[i];
    }
    int ans = 0;
    for(int i = 1;i<=n;++i)
    {
        if(a[i]==0)
        {
            int tmp = 0;
            for(;i<=n;++i)
            {
                if(a[i]==0)
                {
                    tmp++;
                }
                else {
                    break;
                }
            }
            ans  = max(tmp,ans);
        }
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);
    int t;cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}