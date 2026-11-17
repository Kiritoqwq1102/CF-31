
#include <bits/stdc++.h>
#include <vector>
using namespace std;
using ll = long long;
void solve()   
{
    int x,y;
    cin>>x>>y;
    string s;cin>>s;
    vector<int> tong(30);

    for(int i = 0;i<s.size();++i)
    {
        tong[s[i]-'a']++;
    }
    int cnt = 0;
    for(int u: tong)
    {
        if(u%2==1)
        {
            cnt++;
        }
    }
    if(cnt-y>1)
    {
        cout << "NO" << '\n';
    }else {
        cout << "YES" << '\n';
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
