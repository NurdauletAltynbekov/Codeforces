#include <iostream>
#include <string>

using namespace std;
int p[11];
int main() {


    string s;
    cin >> s;
    for(int i=0;i<s.size();i++) {
        p[s[i] - 48]++;
    }
    int mn=1e9, mx=0;
    for(int i=0;i<=9;i++) {
        if(p[i] == 0) continue;

        mn=min(mn, p[i]);
        mx=max(mx, p[i]);
    }
    if(mx==mn) cout<<"YES";
    else cout<<"NO";
    cout<<int(s[0]);
}