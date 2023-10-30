#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int arr[N];
    int sum = 0, max = -1e9;
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
        if(arr[i]>max){
            max = arr[i];
        }
        sum+=arr[i];
    }
    cout<<sum<<" "<<max;
    return 0;
}