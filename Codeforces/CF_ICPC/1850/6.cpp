#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    getline(cin,s);
    getline(cin,t);
    if(t.length()%s.length()!=0){
        cout<<"NO";
    }
    int n = s.length(); 
    while (n--)
    {
        if(t.substr(0,s.length()-1) == s){
            t.erase(t.begin(), t.end()-3);
            cout<<t<<endl;
        }
    }
    
    
    
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s, t; cin >> s >> t;
//     if ((int)t.size() % (int)s.size() != 0) {
//         cout << "NO";
//         return 0;
//     }
//     int povtor = (int)t.size() / (int)s.size(), i = 0;
//     string temp = t.substr(0*(int)s.size(),povtor*(int)s.size());
//     if ((temp == t && povtor != 1) || s == t) {
//         cout << "YES";
//     } else {
//         cout << "NO";
//     }
//     return 0;
// }