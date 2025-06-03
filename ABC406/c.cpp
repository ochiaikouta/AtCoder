#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N+1);
    vector<int> T;
    for (int i = 1; i <= N; i++ ){
        cin >> A.at(i);
    }

    for (int i = 1; i <= N-2; i++) {
        if (A.at(i) < A.at(i+1) && A.at(i+1) > A.at(i+2)) {
            T.push_back(i+1);
        }

    }
    int count = 0;


    return 0;
}
