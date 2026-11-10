#include<bits/stdc++.h>
#include <vector>

using namespace std;
using ll = long long;
void solve() 
{
    int n;cin>>n;
    vector<int> a(n+1);
    for(int i = 1;i<=n;++i)
        cin>>a[i];
    
    vector<int> ans;
    ans.push_back(a[1]);
    for(int i = 2;i<=n;++i)
    {
        if(a[i]>=a[i-1])
        {
            ans.push_back(a[i]);
        }
        else
        {
            ans .push_back(1);
            ans.push_back(a[i]);
        }
    }

    cout << (int)ans.size() << '\n';
    for(int i : ans)
    {
        cout << i << ' ';
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