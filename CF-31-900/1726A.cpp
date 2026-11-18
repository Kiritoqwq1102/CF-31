
#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
using ll = long long;

void solve()   
{
    int n;cin>>n;
    vector<int> a(n+1);

    for(int i = 1;i<=n;++i)
        cin>>a[i];
    if(n==1)
    {
        cout << 0 << '\n';
        return;
    }
    //对于1 3 9 会变成3 9 1 在变成9 1 3
    //对于索引来说是 3-1  1-2  2-3 
    //发现规律 左边是 n 1 2 3 4 ... n-1 右边是 1 2 3 4 5 
    //我的思路是 以是否固定左右两边为变量进行遍历
    //对于固定左的情况 右能变成除左的任意数 
    //对于固定右的情况 左能变成除右的任意数
    //对于两边都不固定的情况进行一次遍历
    //最后输出最大值ans 即可

    int o = a[1];int p = a[n];
    ll ans = a[n]-a[1];
    for(int i = 2;i<=n;++i)
    {
        ans = max(1LL*(a[i-1]-a[i]),ans);
    }
    sort(a.begin(),a.end());
    //对于固定右边
    ans = max(ans,1LL*(p-a[1]));
    ans = max(ans,1LL*(a[n]-o));

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


