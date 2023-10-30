#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int stops = 0;
    while(n>0){
        stops++;
        if(stops%7==0){
            continue;
        }
        else if(stops%2==0){
            n-=4;
        }
        else if(stops%2!=0){
            n+=3;
        }
    }
    cout<<stops+1;
    return 0;
}