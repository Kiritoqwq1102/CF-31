#include<bits/stdc++.h>
#include <vector>
using namespace std;
using ll = long long;
int main()
{
    int n;cin>>n;
    //埃氏筛
    // vector<int> a(n+1);
    // ll cnt = 0;
    // for(int i = 2;i<=n;++i)
    // {
    //     if(a[i]==0)
    //     {
    //         cnt ++;
    //         for(int j = i*2;j<=n;j+=i )
    //         {
    //             a[j]++;
    //         }
    //     }
    // }

    // cout  << cnt << '\n';


    //欧拉筛

    vector<int> a(n+1);
    vector<int> prime;
    int cnt = 0;
    for(int i = 2;i<=n;++i)
    {
        if(a[i]==0)
        {
            cnt++;
            prime.push_back(i);
        }


        for(int p : prime)
        {
            if(p*i>n) break;

            a[i*p] = 1;
            if(i%p==0)
                break;
        }
    }
    return 0;
}