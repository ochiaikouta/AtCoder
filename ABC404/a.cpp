#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    set<char> T;
    cin >> S;
    for (size_t i = 0; i < S.length(); i++) {
        T.insert(S.at(i));
    }
    char a = 'a';
    int beg = int(a);
    while (true){
        if (!T.count(char(beg))) {
            cout << char(beg) << endl;
            break;
        }
        beg ++ ;
    }
    return 0;
}
