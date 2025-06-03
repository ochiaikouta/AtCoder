#include <bits/stdc++.h>
using namespace std;

int main() {
    int R, X;
    cin >> R >> X;
    switch (X)
    {
    case 1:
        if (R >= 1600 && R <= 2999){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
        break;
    case 2:
        if (R >= 1200 && R <= 2399){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
        break;

    }
    return 0;
}
