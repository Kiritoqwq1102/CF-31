
#include <bits/stdc++.h>
#include <vector>
using namespace std;
using ll = long long;
//2026.11.12
//本题学会疑惑符号
//对于两个二进制符号 相对位置相同为0 不同为1
void solve()   
{
    int n;cin>>n;
    vector<int> a(n+1);

    for(int i = 1;i<=n;++i)
        cin>>a[i];

    int o = a[1];

    for(int i = 2;i<=n;++i)
    {
        o ^= a[i];
    }

    if(n%2==0)
    {
        if(o!=0)
        {
            cout << -1 << '\n';
        }
        else {
            cout << 0 << '\n';
        }
    }
    
    else {
        for(int i = 0;i<2e8;++i)
        {
            if((i^o)==0)
            {
                cout << i << '\n';
                return;
            }
        }
        cout << -1 << '\n';
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


