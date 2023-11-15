#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
    int limit;
    cin >> limit;
    bool b = false;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        { 
            if(arr[i][j] > limit){
                b = true;
                break;
            }
        }
    }
    if(b){
        cout<<"Penalty!";
    }
    else{
        cout <<"No penalty for today.";
    }
    return 0;
}