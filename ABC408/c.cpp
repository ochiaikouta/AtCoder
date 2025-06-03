#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll N, M;
    cin >> N >> M;
    vector<ll> A(N+2, 0);
    vector<ll> S(N+2, 0);
    S.at(N+1) = 1e9;

    for (int i = 1; i <= M; i++) {
        ll  lt, rt;
        cin >> lt >> rt;
        A.at(lt) += 1;
        A.at(rt + 1) -= 1;
    }
    ll ans = 1e9;
    for (int i = 1; i <= N+1; i++) {
        S.at(i) += S.at(i-1) + A.at(i);
    }
    ll tmp = 1e9;
    for (int i = 1; i <= N+1; i++) {
        tmp = S.at(i);
        ans = min(ans, tmp);
    }
    cout << ans << endl;

}
