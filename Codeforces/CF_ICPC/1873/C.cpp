#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, l, r;
    int a = 0;
    cin>>n>>l>>r;
    int arr[n];
    l = l - 1;
    r = r - 1;
    int m = r - l;
    int j = 0;
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
        // for (int i = l; i<r; i++)
        // {
        //     a = arr[i];
        //     arr[i] = arr[r-j];
        //     arr[r-j] = a;
        //     j++;
        // }
        reverse(arr+l, arr+r+1);
    for (int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}