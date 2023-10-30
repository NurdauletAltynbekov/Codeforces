#include <bits/stdc++.h>
using namespace std;
int main(){
    double n;
    cin>>n;
    double iPhone = 500000;
    double mon = 0;
    int month = 0;
    bool b = true;
    while(b){
        mon += n*0.3;
        n = n + n * 0.1;
        month++;
        if(mon>=iPhone){
            b = false;
        }
    }
    cout<<month;
    return 0;
}