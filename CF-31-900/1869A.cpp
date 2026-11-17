
#include <bits/stdc++.h>
#include <vector>
using namespace std;
using ll = long long;

void solve()   
{
    int x;
    cin>>x;
    vector<int> a(x+1);
    for(int i = 1;i<=x;++i)
    {
        cin>>a[i];
    }
    if(x%2==0)
    {
        cout << 2 <<'\n';
        cout << 1 << ' ' << x << '\n';
        cout << 1 << ' ' << x << '\n';
    }
    else {
        cout << 4 << '\n';
        cout << 1 << ' ' << x-1 << '\n';
        cout << 1 << ' ' << x-1 << '\n';
        cout << x-1<< ' '<< x << '\n';
        cout << x-1<< ' '<< x << '\n';
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


