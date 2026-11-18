
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()   
{
    ll n;cin>>n;
    if(n<4 || n%2==1)
    {
        cout << -1 << '\n';
        return;
    }

    if(n==4)
    {
        cout << 1 << ' '<<1<< '\n';
        return;
    }
    if(n%4==0&&n%6==0)
    {
        cout << n/6 << ' '<< n/4<<'\n';
        return;
    }


    if(n%4==0&&n%6!=0)
    {
        cout << n/6+1 << ' ' << n/4 << '\n';
    }

    if(n%4!=0&&n%6==0)
    {
        cout << n/6 << ' '<< n/4 << '\n';
    }
        if(n%4!=0&&n%6!=0)
    {
        cout << n/6+1 << ' ' << n/4 << '\n';
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


