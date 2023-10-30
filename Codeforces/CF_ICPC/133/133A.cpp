#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1, s2;
    bool b = false;
    cin>>s1;

    int l1 = s1.size();

    for (int i = 0; i < l1; i++)
    {
        if (s1[i] == 'H' || s1[i] == 'Q' || s1[i] == '9'){
            b = true;
        }
    }
    cout<<((b) ? "YES" : "NO")<<endl;
    return 0;
}