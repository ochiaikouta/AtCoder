#include<bits/stdc++.h>
#include<atcoder/all>
using namespace std;
using namespace atcoder;
int main()
{
    float x;
    cin >> x;
    if (x >= 38) cout << 1;
    else if (x >=37.5) cout <<2;
    else cout << 3;
}