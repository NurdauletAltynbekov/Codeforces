#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int t, n, prod=1;
    cin>>t;
    int cnt[t];
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin>>arr[j];
        }
        sort(arr, arr+n);
        arr[0]++;
        for (int r = 0; r < n; r++)
        {
            prod *= arr[r];
        }
        cnt[i] = prod;
        prod = 1;
        
    }
    for (int i = 0; i < t; i++)
    {
        cout<<cnt[i]<<endl;
    }
    return 0;
}