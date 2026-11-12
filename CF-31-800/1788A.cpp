
#include <bits/stdc++.h>
#include <vector>
using namespace std;
using ll = long long;

void solve()   
{
    int n;cin>>n;
    int cnt = 0;
    vector<int> a(n+1);
    for(int i = 1;i<=n;++i)
    {
        int x;cin>>x;
        a[i] = x;
        if(x==2)
            cnt++;
    }
    if(cnt == 0)
    {
        cout << 1 << '\n';
        return;
    }
    if(cnt%2==1)
    {
        cout << -1 << '\n';
    }

    else {
        cnt /= 2;
        for(int i = 1;i<=n;++i)
        {
            if(a[i]==2)
            {
                cnt--;
                if(cnt == 0)
                    {cout << i << '\n';return;}
            }
        }
    }

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


