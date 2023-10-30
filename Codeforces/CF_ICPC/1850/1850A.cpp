#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n][3];
    int a,b,c;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        sort(arr[i],arr[i]+3);
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i][1] + arr[i][2] >= 10){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    
    
    
    return 0;
}