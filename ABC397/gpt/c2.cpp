#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // 左側の種類数を求める
    vector<int> left_count(N, 0);
    set<int> left_set;
    for (int i = 0; i < N; i++) {
        left_set.insert(A[i]);  
        left_count[i] = left_set.size();
    }

    // 右側の種類数を求める
    vector<int> right_count(N, 0);
    set<int> right_set;
    for (int i = N - 1; i >= 0; i--) {
        right_set.insert(A[i]);  
        right_count[i] = right_set.size();
    }

    // 最大値を求める
    int max_sum = 0;
    for (int i = 0; i < N - 1; i++) {  // 1 ≤ i ≤ N-1 の分割を全て試す
        max_sum = max(max_sum, left_count[i] + right_count[i + 1]);
    }

    cout << max_sum << endl;
    return 0;
}
