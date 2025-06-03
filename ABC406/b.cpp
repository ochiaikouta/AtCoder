#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll N, K;
    cin >> N >> K;
    vector<ll> A(N);
    for (ll i = 0; i < N; i++) {
        cin >> A[i];
    }

    ll S = 1;
    for (ll i = 0; i < N; i++) {
        double log_sum = log10(S) + log10(A[i]);
        if (log_sum >= K - 1e-9) {
            S = 1;
        } else {
            S *= A[i];
        }
    }

    cout << S << endl;
    return 0;
}
