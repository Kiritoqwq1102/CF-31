
#include <bits/stdc++.h>
#include <utility>
#include <vector>
using namespace std;
using ll = long long;
// 20026.11.6
void solve() {
  int n;
  cin >> n;
  vector<int> a(n + 1);
  vector<int> tong(n + 1, 0);

  for (int i = 1; i <= n; ++i) {
    cin >> a[i];
    tong[a[i]]++;
    if (tong[a[i]] > 1) {
      cout << "NO" << "\n";
      return;
    }
  }

  while (1) {
    bool flag = false;
    for (int i = 2; i < n; ++i) {
      if (a[i] != i && a[i] > a[i + 1] && a[i] > a[i - 1]) {
        swap(a[i], a[i + 1]);
        flag = true;
      }
    }
    for (int i = 1; i <= n; ++i) {
      if (a[i] == i) {
        if (i == n) {
          cout << "YES" << '\n';
          return;
        }
      } else {
        break;
      }
    }

    if (flag == false) {
      cout << "NO" << '\n';
      return;
    }
  }
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}