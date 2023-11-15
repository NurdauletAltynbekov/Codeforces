#include <bits/stdc++.h>
using namespace std;

string Ans(string str, int n){
    int cnt = 0;
    for(char i: str){
        if(isdigit(i)){
            cnt++;
        }
    }
    return ((cnt>=n) ? "YES" : "NO");
}

int main(){
    string str; int n; cin>>str>>n;
    cout<<Ans(str,n);
    return 0;
}