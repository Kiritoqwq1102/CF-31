#include <bits/stdc++.h>
// 2026.11.6
using namespace std;
using ll = long long;
void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  ll ans = 0;
  for (int i = 0; i + 2 < n; ++i) //这个for要这么写i+2 不然当n<2是会越界
  {
    if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.') {
      cout << 2 << '\n';
      return;
    }
  }
  for (int i = 0; i < n; ++i) {
    if (s[i] == '.') {
      ans++;
    }
  }

  cout << ans << '\n';
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