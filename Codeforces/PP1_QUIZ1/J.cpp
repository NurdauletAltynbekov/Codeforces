#include <bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,n3,c1,c2,c3,m;
    cin>>n1>>n2>>n3>>c1>>c2>>c3>>m;
    cout<<((n1*c1+n2*c2+n3*c3<=m) ? "Yes" : "No");
    return 0;
}