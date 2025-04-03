#include<bits/stdc++.h>
#include<atcoder/all>
using namespace std;
using namespace atcoder;


int main(){
    string s;
    cin >> s;
    int n = s.size();
    int sumh = 0;
    int sump = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == '-')
        {
            sump++;
        }
        else if (s[i] == '|')
        {
            sumh++;
        }

        if (sumh == 1)
        {
            cout << sump << " ";
            sumh = 0;
            sump = 0;
        }
        
    }
    
}
