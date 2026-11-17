
#include <bits/stdc++.h>
#include <vector>
using namespace std;
using ll = long long;

void solve()   
{
    ll n;cin>>n;
    int ans =1;

    ll tmp = 1;
    for(int i = 2;i<=1000;++i)
    {
        tmp*=i;
        if(n%i==0)
        {
            ans ++;
        }
        else {
            break;
        }
    }
    cout << ans << '\n';


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


