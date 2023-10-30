#include <bits/stdc++.h>
using namespace std;
int main(){
    double x,y;
    cin>>x>>y;
    double z = 0;
    bool b = true;
    int day = 1;
    while(b){
        if(x>=y){
            cout<<day;
            break;
        }
        day++;
        x += x * 0.1; 
    }
    return 0;
}