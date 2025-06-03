#include <bits/stdc++.h>
using namespace std;

int main() {

    int A, B,C, D;
    cin >> A >> B >> C >> D;
    int f = A * 60 + B;
    int g = C * 60 + D;
    if (f > g) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

