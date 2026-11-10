#include <bits/stdc++.h>
// 2026.11.9

// 本题收获
//学会使用string的find（）函数来找到字串
//要记住找不到返回string：：npos
//时间复杂度（m*n）
//两个字符串的长度相乘
using namespace std;
using ll = long long;
void solve() {
//   int n, k;
//   cin >> n >> k;
//   string x, y;
//   cin >> x >> y;
//   for (int ans = 0; ans <= 7; ++ans) {
//     if(x.size()<k)
//     {
//         x+=x;
//         continue;
//     }
//     for (int i = 0; i+k <= (int)x.size() ; ++i) {
//       for (int j = 0; j < k; ++j) {
//         if (x[i+j] != y[j])
//           break;
//         if (j == k - 1) {
//           cout << ans << '\n';
//           return;
//         }
//       }
//     }
//     x +=x;
//   }

//   cout << -1 <<'\n';


    int n,m;
    cin>>n>>m;
    string x,y;
    cin>>x>>y;
    for(int ans = 0;ans<=5;++ans)
    {
        if(x.find(y)!=string::npos)
        {
            cout << ans << '\n';
            return;
        }
        if(ans < 8)
            x+=x;
    }
    cout << -1 << '\n';
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}