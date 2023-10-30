#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str = to_string(n);
    bool b = true;
    for (int i = 0; i < str.length()/2; i++)
    {
        if(str[i] != str[str.length()-i-1]){
            cout<<"NO";
            b = false;
            break;
        }
    }
    if(b){
        cout<<"YES";
    }
    return 0;
}