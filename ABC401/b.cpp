#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {

    int N;
    bool status = false;
    int count = 0;
    cin >> N;
    vector<string> S(N+1);
    S[0] = "logout";

    for (int i = 1; i <N+1 ; i++) {
        cin >> S[i];
        
        if(S[i] == "login"){
            status = true;
        } else if (S[i] == "logout"){
            status = false;
        }

        if(!status && S[i] == "private") {
            count++;
        }

    }
    cout << count << endl;
    

    return 0;
}
