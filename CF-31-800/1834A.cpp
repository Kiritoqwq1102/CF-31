#include<bits/stdc++.h>

using namespace std;
using ll = long long;
void solve() 
{
    //本题学会的 记得·初始化 o,pj;
    int n;cin>>n;
    int o = 0;
    int p = 0;
    for(int i = 1;i<=n;++i)
    {
        int x; cin>>x;
        if(x==1)
        {
            o++;
        }
        else {
            p++;
        }
    }


    if(o>=p&&p%2==0)
    {
        cout << 0 << '\n';
        return;
    }

    else {
        if(o>=p)
        {
            cout << 1 << '\n';
        }
        else
        {
            int u = p-o;
            int ans = u/2+u%2;
            if((p-ans)%2==1)
            {
                cout << ans + 1 <<'\n';
            }
            else
            {
                cout << ans <<'\n';
            }
        }
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