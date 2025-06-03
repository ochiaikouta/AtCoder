#include <bits/stdc++.h>
using namespace std;

int main() {

    double N, S;
    cin >> N >> S;
    vector<double> T(N);
    for (int i = 0; i < N; i++) cin >> T.at(i);
    bool found = false;
    for (int i = 0; i < N-1; i++) {
        if (T.at(i+1) - T.at(i) >= S + 0.5) {
            found = true;
            break;
        }
    }
    
    if (found) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
    return 0;
}
