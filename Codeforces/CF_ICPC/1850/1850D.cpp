#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    int cnt = 1, ans = 1;
    for (int i = 1; i < n; i++)
    {
        // if(sizeof(arr) == 1){
        //     cnt=0;
        // }
        if(abs(arr[i] - arr[i-1])<=k){
            cnt++;
        }
        else{
            cnt = 1;
        }
        ans = max(ans,cnt);
    }
    cout<<n-ans<<endl;
    
    
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}