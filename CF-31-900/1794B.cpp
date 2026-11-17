#include<bits/stdc++.h>
#include <vector>

using namespace std;
using ll = long long;
void solve() 
{
    int n;
    cin>>n;
    vector<int> a(n+1);
    int o = 2*n;
    for(int i = 1;i<=n;++i)
    {
        cin>>a[i];
        if(a[i]==1)
            {a[i]++;o--;}
    }


    for(int i = 1;i<n;++i)
    {
        if(a[i+1]%a[i]==0)
        {
            a[i+1]++;
        }
    }
    for(int i = 1;i<=n;++i)
    {
        cout << a[i] <<' ';
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