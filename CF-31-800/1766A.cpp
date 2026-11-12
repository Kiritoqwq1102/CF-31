#include<bits/stdc++.h>
#include <vector>

using namespace std;
using ll = long long;
void solve() {
    int n;
    cin >> n;

    int ans = 0;
    while (n >= 10) {
        ans += 9;
        n /= 10;
    }

    cout << ans + n << '\n';
}

int main() {
    ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);
    int t;cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}