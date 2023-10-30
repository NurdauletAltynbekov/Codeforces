#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        string str = to_string(arr[i]);
        for (int j = 0; j < str.length(); j++)
        {
            sum += str[j]-48;
        }
        cout<<((sum%2==0) ? "Sum of digits is even!" : "Sum of digits is odd!")<<endl;
    }
    
    
    return 0;
}