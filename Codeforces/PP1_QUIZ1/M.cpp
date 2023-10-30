#include <bits/stdc++.h>
using namespace std;
int main(){
    double n,a,d;
    cin>>n>>a>>d;
    int sum = 0;
    while(n){
        cout<<a<<" ";
        sum+=a;
        a+=d;
        n--;
    }
    cout<<endl<<"sum: "<<sum;
    return 0;
}