#include <bits/stdc++.h>
using namespace std;

int main() {
    string T, U;
    cin >> T >> U;
    int lent = T.length();
    int lenu = U.length();
    bool found = false;
   
    for (int i = 0; i < lent - lenu + 1; i++) {
        bool tmp = true;
       for (int j = 0; j < lenu; j++) {
            if(T.at(i+j) != U.at(j) && T.at(i+j) != '?'){
                tmp = false;
                break;
            }
        
       }
       if (tmp) {
        found = true;
        break;
       }
    }

    if (found){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }


    return 0;
}
