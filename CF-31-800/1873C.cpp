#include<bits/stdc++.h>
//2026.11.10

using namespace std;
using ll = long long;
void solve() 
{
    string s[10];
    for(int i = 0;i<10;++i)
    {
        cin>>s[i];
    }

    ll ans = 0;
    for(int i = 0;i<10;++i)
    {
        for(int j = 0;j<10;++j)
        {
            if(s[i][j]=='X')
            {
                if(i+j>=10)
                {
                    ans += min(10-i,10-j);
                }
                else
                {
                    ans +=min(i+1,j+1);
                }
            }
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