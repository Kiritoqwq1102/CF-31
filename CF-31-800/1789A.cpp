
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

    //只要找到两个互质的数

    for(int i = 1;i<n;++i)
    {
        for(int j = i+1;j<=n;++j)
        {
            if(gcd(a[i],a[j])<=2)
                {cout << "Yes" << '\n';return;}
        }
    }
    cout << "No" << '\n';

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


