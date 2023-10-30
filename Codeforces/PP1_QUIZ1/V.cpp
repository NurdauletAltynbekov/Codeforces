#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long p = 1;
    for (int i = 0; i <= n; i++)
    {
        p = 1;
        for (int j = 0; j < i; j++)
        {
            p*=2;
        }
        cout<<p<<endl;
    }
    
    return 0;
}