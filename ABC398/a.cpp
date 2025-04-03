#include<bits/stdc++.h>
#include<atcoder/all>
using namespace std;
using namespace atcoder;
int main()
{
    int N;
    cin >> N;
    if(!(N%2)){
        for (int i = 1; i <= N; i++)
        {
            if((i==(N/2)) || (i==(N/2)+1)){
                cout << "=";
            } else {
                cout << "-";
            }
        }
        
    } else {
        for (int i = 1; i <= N; i++)
        {
            if(i==(N/2)+1){
                cout << "=";
            } else {
                cout << "-";
            }
        }
    }
}