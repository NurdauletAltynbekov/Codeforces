#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<(((a==b && a!=c && b!=c) || (b==c && b!=a && c!=a) || (a==c && a!=b && c!=b)) ? "YES" : "NO");
    return 0;
}