#include <algorithm>
#include<bits/stdc++.h>
#include <vector>
//2026.11.8
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
    int o = a[1]; int p = -1;int pan = -1;
    if(n==2)
        cout << "Yes" << '\n';
    else
    {
        sort(a.begin()+1,a.end());
        int o = a[1];int p = a[n];
        if(o==p)
        {
            cout << "Yes" << '\n';
            return;
        }
        for(int i = 1;i<=n;++i)
        {
            if((a[i] == a[n+1-i]&&i!=n+1-i)||(a[i]!=o&&a[i]!=p))
            {
                cout << "No" << '\n';
                return;
            }
        }
        cout << "Yes" << '\n';
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