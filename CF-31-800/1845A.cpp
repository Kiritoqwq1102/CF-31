#include <bits/stdc++.h>

using namespace std;
using ll = long long;
void solve() {
  int x, k, n;
  cin >> x >> k >> n;
  if (k == 1 || x == 1) {
    cout << "NO" << '\n';
    return;
  }

  if (n != 1) {
    cout << "YES" << '\n';
    cout << x << '\n';
    for (int i = 1; i <= x; ++i) {
      cout << 1 << ' ';
    }
    cout << '\n';
  } else {
    int p = x / 2;
    int o = x % 2;
    if (o == 0) {
      cout << "YES" << '\n';
      cout << p<< '\n';
      for (int i = 1; i <= p; ++i) {
        cout << 2 << ' ';
      }
      cout << '\n';
      return;
    } else {
      if (k < 3) {
        cout << "NO" << '\n';
        return;
      } else {
        cout << "YES" << '\n';
        cout << p << '\n';
        cout << 3 << ' ';
        for (int i = 2; i <= p; ++i) {
          cout << 2 << ' ';
        }
        cout << '\n';
        return;
      }
    }
  }
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