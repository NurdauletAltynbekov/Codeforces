#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<(((a == b || a == c || b == c) && (a+b>c && a+c>b && b+c>a)) ? "Yes" : "No");
    return 0;
}