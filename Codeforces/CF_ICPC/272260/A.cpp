#include <bits/stdc++.h>
using namespace std;

bool isPol(string s){
    for(int i = 0; i<=s.length()/2; i++){
        if(s[i] != s[s.length() - 1 - i]){
            return 0;
        }
    }
    return 1;
}

int isMaxPrefix(string s){
    int Max_Prefix = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(isPol(s.substr(0,i+1))){
            Max_Prefix = max(Max_Prefix, i+1);
        }
    }
    return Max_Prefix;
}

int main(){
    int t;
    cin>>t;
    while (t>0)
    {
        string str;
        cin>>str;
        cout<<isMaxPrefix(str)<<endl;
        t--;
    }
    
    return 0;
}