#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    for (int i=0; i < S.length(); i++) {
        if(isupper(S[i])){
            cout << S[i];
        }
    }
    return 0;
}
