#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
    bool b = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i!=j){
                if(arr[i][j]!=arr[j][i]){
                    b = false;
                    break;
                }
                break;
            }
        }
    }
    if(b){
        cout<<"Perfect.";
    }
    else{
        cout<<"Not perfect.";
    }
    
    return 0;
}