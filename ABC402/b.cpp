#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;
    queue<int> A;
    int S[Q];
    for (int i = 0; i < Q; i++){
        cin >> S[i];
        if (S[i] == 1) {
            int T;
            cin >> T;
            A.push(T);
        } else {
            int T = A.front();
            A.pop();
            cout << T << endl;
        }
    }
    return 0;
}
