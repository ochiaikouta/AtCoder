#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int sum = 0;
    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
        if (i%2 == 0){
            sum += A;
        }
    }
    cout << sum << endl;

    return 0;
}
