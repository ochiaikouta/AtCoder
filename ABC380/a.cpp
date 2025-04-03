#include<bits/stdc++.h>
#include<atcoder/all>
using namespace std;
using namespace atcoder;


int main(){
    char a[6];
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> a[i];
        if (a[i] == '1')
        {
            sum1++;
        }
        else if (a[i] == '2')
        {
            sum2++;
        }
        else if (a[i] == '3')
        {
            sum3++;
        }
    }
    if ((sum1==1) && (sum2==2) && (sum3==3))
        {
            cout << "Yes" << endl;
        }
    else
        {
            cout << "No" << endl;
        }
    
}
