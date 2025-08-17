#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    const int INF = 1e9;
    vector<int> dp(k + 1, INF);
    dp[0] = 0;
    for (int i = 1; i <= k; i++) {
        for (auto coin : a) {
            if (i - coin >= 0 && dp[i - coin] != INF) {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }
    if (dp[k] == INF) cout << -1 << '\n';
    else cout << dp[k] << '\n';

    return 0;
}
