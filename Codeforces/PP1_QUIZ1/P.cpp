#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<((a+b>c && abs(a-b) < c) ? "Valid" : "Invalid");
    return 0;
}