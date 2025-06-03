#include <bits/stdc++.h>
using namespace std;

int main() {

    int A, B;
    cin >> A >> B;
    int C =  A/B;
    int D = C + 1;;
    if ( 2*A - 2 * B * C - B < 0) {
        cout << C << endl;
    } else {
        cout << D << endl;
    }
}
