#include <bits/stdc++.h>
using namespace std;

string gcdOfStrings(string str1, string str2) {
        if(str1.substr(0,str2.length()) == str2){
            str1.pop_back();
        }
    }

int main(){
    string str1,str2;
    cin>>str1>>str2;
    cout<<gcdOfStrings;
    return 0;
}