
#include <bits/stdc++.h>
#include <utility>
#include <vector>

//本题学会快速反转数组 使用reverse
using namespace std;
using ll = long long;

void solve()   
{
    int n;cin>>n;
    vector<int> a(n+1);
    for(int i = 1;i<=n;++i)
        cin>>a[i];

    int cnt = 0;

    for(int i = 1;i<=n;++i)
    {
        if(a[i]==a[1])
            cnt++;
    }

    if(cnt==n)
    {
        cout << "NO" << '\n';
        return;
    }

    cout << "YES" << '\n';

    reverse(a.begin()+1,a.end());

    if(a[1]==a[2])
    {
        swap(a[1],a[n]);
    }

    for(int i = 1;i<=n;++i)
    {
        cout << a[i] << ' ';
    }
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


