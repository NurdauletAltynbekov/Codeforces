#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string s1;
    bool b = false;
    cin >> s1;

    int len = s1.length();

    for (int i = 0; i < len; i++)
    {
        if(s1[i] == 'H' || s1[i] == 'Q' || s1[i] == '9')
        {
            b = true;
        }

    }
    
    cout << ((b) ? "YES" : "NO");

    
    return 0;
}