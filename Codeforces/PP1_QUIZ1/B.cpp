#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int arr[3] = {a,b,c};
    sort(arr, arr+3);
    cout<<arr[2]<<" "<<arr[1]<<" "<<arr[0];
    return 0;
}