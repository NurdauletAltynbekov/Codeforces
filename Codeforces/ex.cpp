#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,m;
    cin>> n>>m;
    int arr[n][m];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j]%2!=0){
                cout<<arr[i][j]<<" ";
            }
        }
        // cout<<endl;
    }
    
    return 0;
}