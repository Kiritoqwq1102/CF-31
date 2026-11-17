
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()   
{
    ll n,k,x;
    cin>>n>>k>>x;
    ll p = k;
    ll may = 0;
    ll min = 0;

    if(k==1)
    {
        if(n>=x)
    {
        cout << "YES" << '\n';
    }
        else {
        cout << "NO" << '\n';
    }
            return;
    }
    if(k%2==0)
    {
        may = (n + (n-k+1))*(k/2);
        min = (1 + (1+k-1))*(k/2);
    }
    else {
        may = (n + (n-k+1))*(k/2) + (n-k/2);
        min = (1 + (1+k-1))*(k/2) +(k/2+1);
    }

    // for(int i = 1;i<=n;++i)
    // {
    //     min += i;
    //     p--;
    //     if(p==0)
    //     {
    //         break;
    //     }
    // }
    // for(int i = n;i>0;--i)
    // {
    //     may += i;
    //     k--;
    //     if(k==0)
    //     {
    //         break;
    //     }
    // }
    // cout << may << ' ' << min;
    // cout << '\n';
    if(may >= x && x>=min)
    {
        cout << "YES" << '\n';
    }
    else {
        cout << "NO" << '\n';
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


