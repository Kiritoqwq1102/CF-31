
#include <bits/stdc++.h>
#include <map>
#include <vector>
using namespace std;
using ll = long long;
int pan (string s,int mid)
{
    map<char, int> op ;
    for(int i = 0;i<=25;++i)
    {
        op.insert({'a'+i,0});
    }

    for(int i = 0;i<mid;++i)
    {
        op[s[i]]++;
    }

    // char a = 'a';
    // cout << char(a+24);
    for(int i = )
}

void solve()   
{
    int x,y;
    cin>>x>>y;

    string s;cin>>s;

    for(int i = 0;i<=s.size()-1;++i)
    {
         int o = pan (s,i);
         if(o==y)
         {
            cout << "YES" << '\n';
            return;
         }
    }
    cout << "NO" << '\n';


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


