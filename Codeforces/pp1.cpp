#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    string str = "12235";
    // cin>>ch;
    int arr[sizeof(str)];
    int cnt = 0;
    for (int i = 0; i < sizeof(str); i++)
    {
        if(isdigit(str[i])){
            arr[i] = int(str[i]);
        }
    }
    for (int i = 0; i < sizeof(str); i++)
    {
        cout<<arr[i];
    }
    
    // cout<<isdigit(ch[0]);

    
    
    return 0;
}