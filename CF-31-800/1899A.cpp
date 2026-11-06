
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
//2026.11.6
void solve()   
{
    int n;cin>>n;
    if(n%3==1||n%3==2)
    {
        cout << "First" << '\n';
    }else {
        cout << "Second" << '\n';
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