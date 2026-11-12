
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()   
{
    // int n;cin>>n;
    // string s;cin>>s;

    // if(n==1)
    // {
    //     cout << 1 <<'\n';
    //     return;
    // }
    // int ans =0;
    // int start = 0;int end = n-1;
    // int pos = 0;
    // while(start<end)
    // {
    //     if(s[start]==s[end])
    //     {
    //         cout << n - 2*pos << '\n';
    //         return;
    //     }

    //     else {
    //         start++;
    //         end --;
    //         pos++;
    //         if(start == end )
    //         {
    //             cout << 1 << '\n';
    //             return;
    //         }
    //     }
    // }

    // cout << 0 << '\n';

    int n;cin>>n;
    string s;cin>>s;
    int start = 0;
    int end = n-1;
    while(start<end && s[start] != s[end])
    {
        start ++;
        end --;
    }

    cout << end - start +1 << '\n';
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


