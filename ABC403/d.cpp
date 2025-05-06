#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }
    sort(A.begin(), A.end());
    int count = 0;
    bool found = false;
    int n = 0;
    for(int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++ ){
            if (A.at(j) - A.at(i) == D){
                count++;
                break;
            }
        }
    }
    cout << count << endl;
    return 0;
}
