#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    int max_sum[m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum+=arr[i][j];
        }
        max_sum[i] = sum;
    }
    sort(max_sum, max_sum + m);
    cout<<max_sum[m-1];
    
    return 0;
}