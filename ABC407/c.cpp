#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll S;
    cin >> S;
    vector<vector<ll>> dp(2, vector<ll>(S+1, 1e9));
    dp[0][0] = 0;
    dp[1][1] = 1;
    ll ans = 0;
for (ll i = 2; i <= S; i++) {
    dp.push_back(vector<ll>(S+1, 1e9));
    for (ll j = 2; j <= S; j++) {
        if (j-(j%9)) {
            dp[i][j] = dp[i-1][j-1];
        } else {
            dp[i][j] = min(dp[i-1][j-(j%9)], dp[i-1][j-1] + 1);
        }

    }
    if (dp[i][S] != 1e9) {
        ans = dp[i][S];
        break;
    }
}

    cout << ans << endl;
    return 0;
}
