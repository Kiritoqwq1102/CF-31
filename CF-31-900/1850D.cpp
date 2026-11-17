
#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
using ll = long long;

void solve()   
{
    int n,k;cin>>n>>k;
    vector<int> a(n+1);
    for(int i = 1;i<=n;++i)
        cin>>a[i];

    sort(a.begin()+1,a.end());

    vector<int> pan;
    pan.push_back(0);
    for(int i = 2;i<=n;++i)
    {
        if(a[i]-a[i-1]>k)
        {
            pan.push_back(i-1);
        }
    }
    pan.push_back(n);
    // for(int i : a)
    // {
    //     cout << i << ' ';
    // }
    // cout << '\n';
    // for(int u : pan)
    // {
    //     cout << u << ' ';
    // }

    // cout << '\n';

    vector<int> diff;

    for(int i = 1;i<pan.size();++i)
    {
        diff.push_back(pan[i]-pan[i-1]);
    }
    // for(int y : diff)
    // {
    //     cout << y << ' ';
    // }

    sort(diff.begin(),diff.end());

    cout << n - diff.back();
        cout << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}


