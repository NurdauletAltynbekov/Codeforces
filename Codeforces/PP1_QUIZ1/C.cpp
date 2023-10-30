#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    x -= a;
    if(x>0 && x+y >= b){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}